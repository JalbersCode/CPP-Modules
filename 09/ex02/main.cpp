/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by                   #+#    #+#             */
/*   Updated: 2023/10/11 16:20:11 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char *argv[])
{
    if (argc <= 1)
        return (0);
    {
        Timer timer = Timer("Main");


        PmergeMe pmerge_obj = PmergeMe();
        
        std::cout << "Before: " << argv;
        // pmerge_list.print_container(pmerge_list.get_list());
        std::cout << std::endl;

        {
            Timer	timer = Timer("Merge Sort Vector");
            PmergeMe pmerge_list = PmergeMe(argv + 1, "list");
            pmerge_list.set_list(PmergeMe::merge_sort_list(pmerge_list.get_list(), 0, pmerge_list.get_list().size() - 1));
        }
        {
            Timer	timer = Timer("Merge Sort List");
            PmergeMe pmerge_vector = PmergeMe(argv + 1, "vector");
            pmerge_vector.set_vector(PmergeMe::merge_sort_vector(pmerge_vector.get_vector(), 0, pmerge_vector.get_vector().size() - 1));
        }
        std::cout << "After: ";
        pmerge_list.print_container(pmerge_list.get_list());
        std::cout << std::endl;
    }
    return (0);
}