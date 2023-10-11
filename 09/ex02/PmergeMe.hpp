/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by                   #+#    #+#             */
/*   Updated: 2023/10/11 16:24:40 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME_HPP
#define PMERGE_ME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <set>
#include <cstdlib>
#include "Timer.hpp"

class PmergeMe
{
    private:
        std::vector<int>    _vector;
        std::list<int> _list;
        std::deque<int> _deque;
        std::set<int> _set;
        std::multiset<int> _multiset;
        std::map<std::string, int> _map;
        std::multimap<std::string, int> _multimap;

    public:
        PmergeMe();
        PmergeMe(char *input[], const std::string &label);
        ~PmergeMe();
        PmergeMe(const PmergeMe& other);
        PmergeMe& operator=(const PmergeMe& other);
        void    print_containers();
        template <typename Container>
        void print_container(Container& container);
        std::vector<int> &get_vector();
        std::list<int> &get_list();
        void set_vector(std::vector<int> new_vector);
        void set_vector(char *input[]);
        void set_list(char *input[]);
        void set_list(std::list<int> new_list);
        static std::vector<int> merge_sort_vector(std::vector<int> &input, int start, int end);
        static std::list<int> merge_sort_list(std::list<int> &input, int start, int end);
};
#endif