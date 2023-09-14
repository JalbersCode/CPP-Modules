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

template <typename T, typename Func>
void    iter(T *array, size_t size, Func func)
{
    for (size_t i = 0; i < size; i++)
    {
        func(array[i]);
    }
}

// template <typename T>
// void    iter(T *array, size_t size, void (*func)(const T &))
// {
//     for (size_t i = 0; i < size; i++)
//     {
//         func(array[i]);
//     }
// }

// template <typename T>
// void    iter(T *array, size_t size, void (*func)(T))
// {
//     for (size_t i = 0; i < size; i++)
//     {
//         func(array[i]);
//     }
// }
