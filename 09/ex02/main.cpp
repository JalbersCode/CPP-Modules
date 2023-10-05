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

int	main(int argc, char *argv[])
{
    if (argc <= 1)
        return (0);
    {
        Timer timer = Timer("Main");
        PmergeMe pmerge_obj = PmergeMe(argv + 1, "vector");
        std::cout << "Before: ";
        pmerge_obj.print_container(pmerge_obj.get_vector());
        std::cout << std::endl;

        pmerge_obj.merge_sort_vector(pmerge_obj.get_vector());

        std::cout << "After: ";
        pmerge_obj.print_container(pmerge_obj.get_vector());
        std::cout << std::endl;
    }
    return (0);
}