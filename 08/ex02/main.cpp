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

#include "MutantStack.hpp"

int	main(void)
{
    MutantStack<int> mutant;

    mutant.push(1);
    mutant.push(2);
    mutant.push(3);
    mutant.push(4);

    MutantStack<int>::iterator it = mutant.begin();
    // MutantStack<int>::iterator it = std::stack<int>::c.begin();

    for (; it != mutant.end(); it++)
        std::cout << *it << std::endl;

    return (0);
}