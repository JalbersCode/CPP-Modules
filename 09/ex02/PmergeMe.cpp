/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Jalbers42                                         #+#    #+#             */
/*   https://github.com/Jalbers42                     ###   ###########       */
/*                                                                            */
/******************************************************************************/

#include "PmergeMe.hpp"

// template <typename Container, typename Operation>
// void fill_container_old(Container& container, char* input[], Operation operation) {
//     int i = 0;
//     while (input[i]) {
//         int num = std::atoi(input[i]);
//         (container.*operation)(num); // Call the specified member function on the container
//         i++;
//     }
// }

template <typename Container>
void fill_container(Container& container, char* input[], void(*function)(Container&, int)) {
    int i = 0;
    while (input[i]) {
        int num = std::atoi(input[i]);
        function(container, num); // Call the specified member function on the container
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

PmergeMe::PmergeMe(char *input[], const std::string &label)
{
    // void (std::vector<int>::*vectorPushBack)(const int&) = &std::vector<int>::push_back;
    // fill_container(_vector, input, vectorPushBack);
    // void (std::list<int>::*listPushFront)(const int&) = &std::list<int>::push_front;
    // std::set<int>::iterator (std::set<int>::*setInsert)(const int&) = &std::set<int>::insert;

    // {
    //     Timer time = Timer("Fill vector");
    //     fill_container_old(_vector, input, &std::vector<int>::push_back);
    // }
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

// int split_vector(const std::vector<int> &original, std::vector<int> &half1, std::vector<int> &half2)
// {
//     size_t midpoint = original.size() / 2;
//     if (midpoint == 0)
//         return (1);
//     half1 = std::vector<int>(original.begin(), original.begin() + midpoint);
//     half2 = std::vector<int>(original.begin() + midpoint, original.end());
//     return (0);
// }
// int split_vector(const std::vector<int> &original, std::vector<int> &half1, std::vector<int> &half2)
// {
//     size_t midpoint = original.size() / 2;
//     if (midpoint == 0)
//         return 1;

//     // Assign references to portions of the original vector
//     half1 = std::vector<int>(original.begin(), original.begin() + midpoint);
//     half2 = std::vector<int>(original.begin() + midpoint, original.end());
    
//     return 0;
// }

// void    PmergeMe::merge_sort_vector(std::vector<int> &input)
// {
//     std::vector<int> half1;
//     std::vector<int> half2;
//     if (split_vector(input, half1, half2) == 0)
//     {
//         half1[0] = 420;
//         half2[0] = 420;
//         // merge_sort_vector(half1);
//         // merge_sort_vector(half2);
//     }
// }

int split_vector(const std::vector<int> &original, std::vector<int> &half1, std::vector<int> &half2)
{
    size_t midpoint = original.size() / 2;
    if (midpoint == 0)
        return 1;

    // Assign references to portions of the original vector
    half1 = std::vector<int>(original.begin(), original.begin() + midpoint);
    half2 = std::vector<int>(original.begin() + midpoint, original.end());

    return 0;
}

std::vector<int> &PmergeMe::merge_sort_vector(std::vector<int> &input, int start, int end)
{
    std::vector<int> half1;
    std::vector<int> half2;

    if (input.size() > 1)
    {
        size_t midpoint = input.size() / 2;
        half1 = std::vector<int>(input.begin(), input.begin() + midpoint);
        half2 = std::vector<int>(input.begin() + midpoint, input.end());
        half1 = merge_sort_vector(input, 0, midpoint);
        half1 = merge_sort_vector(input, midpoint + 1, )
        // half1 = std::vector<int>(input.begin(), input.begin() + midpoint);
        // half2 = std::vector<int>(input.begin() + midpoint, input.end());
    }
    // if (split_vector(input, half1, half2) == 0)
    // {
    //     (*half1)[0] = 420; // Now this will modify the input vector
    //     (*half2)[0] = 420; // This too will modify the input vector
    //     // Call merge_sort_vector recursively if needed
    //     // merge_sort_vector(half1);
    //     // merge_sort_vector(half2);
    // }
}
