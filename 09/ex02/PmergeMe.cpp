/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by                   #+#    #+#             */
/*   Updated: 2023/10/11 16:25:02 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename Container>
void fill_container(Container& container, char* input[], void(*function)(Container&, int)) {
	int i = 0;
	while (input[i])
	{
		int num = std::atoi(input[i]);
		function(container, num);
		i++;
	}
}

template <typename Container>
void PmergeMe::print_container(Container& container) {
	typename Container::iterator   it;

	it = container.begin();
	while (it != container.end()) {
		std::cout << *it << " ";
		it++;
	}
}

template <typename Container>
void    my_insert(Container &container, int num)
{
	container.insert(num);
}

template <typename Container>
void    my_push_back(Container &container, int num)
{
	container.push_back(num);
}

PmergeMe::PmergeMe()
{
	
}

PmergeMe::PmergeMe(char *input[], const std::string &label)
{
	if (label == "vector")
	{
		Timer time = Timer("Fill vector");
		fill_container(_vector, input, &my_push_back);
	}
	else if (label == "deque")
	{
		Timer time = Timer("Fill deque");
		fill_container(_deque, input, &my_push_back);
	}
	else if (label == "list")
	{
		Timer time = Timer("Fill list");
		fill_container(_list, input, &my_push_back);
	}
	else if (label == "set")
	{
		Timer time = Timer("Fill set");
		fill_container(_set, input, &my_insert);
	}
	else if (label == "multiset")
	{
		Timer time = Timer("Fill multiset");
		fill_container(_multiset, input, &my_insert);
	}
	else
		std::cout << "Invalid label" << std::endl;
}


PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe& other)
{
	(void)other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	if (this != &other)
	{
		
	}
	return (*this);
}

void    PmergeMe::print_containers()
{
	{
		Timer time = Timer("Print vector");
		print_container(_vector);
	}
	{
		Timer time = Timer("Print deque");
		print_container(_deque);
	}
	{
		Timer time = Timer("Print list");
		print_container(_list);
	}
	{
		Timer time = Timer("Print set");
		print_container(_set);
	}
	{
		Timer time = Timer("Print multiset");
		print_container(_multiset);
	}
}

std::vector<int> &PmergeMe::get_vector()
{
	return (_vector);
}

void    PmergeMe::set_vector(char *input[])
{
	fill_container(_vector, input, &my_push_back);
}

void    PmergeMe::set_list(char *input[])
{
	fill_container(_list, input, &my_push_back);
}

void    PmergeMe::set_vector(std::vector<int> new_vector)
{
	_vector = new_vector;  
}

std::list<int> &PmergeMe::get_list()
{
	return (_list);
}

void    PmergeMe::set_list(std::list<int> new_list)
{
	_list = new_list;  
}

std::vector<int> PmergeMe::merge_sort_vector(std::vector<int> &input, int start, int end)
{
	std::vector<int>    half1;
	std::vector<int>    half2;
	std::vector<int>    final;

	if ((end - start) > 0)
	{
		size_t midpoint = (end + start) / 2;

		half1 = merge_sort_vector(input, start, midpoint);
		half2 = merge_sort_vector(input, midpoint + 1, end);

		unsigned int i = 0;
		unsigned int j = 0;
		while (i < half1.size() && j < half2.size())
		{
			if (half1[i] <= half2[j])
				final.push_back(half1[i++]);
			else
				final.push_back(half2[j++]);
		}
		while (i < half1.size())
			final.push_back(half1[i++]);
		while (j < half2.size())
			final.push_back(half2[j++]);
		return (final);
	}
	final.push_back(input[start]);
	return (final);
}


std::list<int> PmergeMe::merge_sort_list(std::list<int> &input, int start, int end)
{
	std::list<int>	half1;
	std::list<int>	half2;
	std::list<int>	final;
	std::list<int>::iterator it1;
	std::list<int>::iterator it2;
	std::list<int>::iterator it_input;

	if ((end - start) > 0)
	{
		size_t midpoint = (end + start) / 2;

		half1 = merge_sort_list(input, start, midpoint);
		half2 = merge_sort_list(input, midpoint + 1, end);
		it1 = half1.begin(); 
		it2 = half2.begin(); 

		unsigned int i = 0;
		unsigned int j = 0;
		while (i < half1.size() && j < half2.size())
		{
			if (*it1 <= *it2)
			{
				final.push_back(*it1++);
				i++;
			}
			else
			{
				final.push_back(*it2++);
				j++;
			}
		}
		while (i < half1.size())
		{
			final.push_back(*it1++);
			i++;
		}
		while (j < half2.size())
		{
			final.push_back(*it2++);
			j++;
		}
		return (final);
	}
	it_input = input.begin();
	std::advance(it_input, start);
	final.push_back(*it_input);
	return (final);
}