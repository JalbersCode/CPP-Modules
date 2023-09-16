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

#include <iostream>
#include <vector>

template <typename T>
int *easyfind(T &container, const int &search_num)
{
    typename T::iterator it = container.begin();
    for (; it != container.end(); it++)
    {
        if (*it == search_num)
        {
            // std::cout << container[it - container.begin()];
            return (&container[it - container.begin()]);
        }
    }    
    return (NULL);
}