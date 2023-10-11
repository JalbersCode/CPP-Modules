/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by                   #+#    #+#             */
/*   Updated: 2023/10/11 18:00:37 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char *argv[])
{
    if (argc <= 1)
        return (0);
    {
        // Timer timer = Timer("Main");
        PmergeMe pmerge_obj = PmergeMe();
        std::cout << "Before: " << argv;
        std::cout << std::endl;
        {
            Timer	timer = Timer("Merge Sort List");
            pmerge_obj.set_list(argv + 1);
            pmerge_obj.set_list(PmergeMe::merge_sort_list(pmerge_obj.get_list(), 0, pmerge_obj.get_list().size() - 1));
        }
        {
            Timer	timer = Timer("Merge Sort Vectors");
            pmerge_obj.set_vector(argv + 1);
            pmerge_obj.set_vector(PmergeMe::merge_sort_vector(pmerge_obj.get_vector(), 0, pmerge_obj.get_vector().size() - 1));
        }
        std::cout << "After: ";
        pmerge_obj.print_container(pmerge_obj.get_list());
        std::cout << std::endl;
    }
    return (0);
}