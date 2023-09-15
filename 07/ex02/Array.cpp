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

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
    this->_array = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    
}

template <typename T>
Array<T>::~Array()
{
}

// template <typename T>
// Array<T>::Array(const Array<T>& other)
// {
//     (void) other;
// }

// template <typename T>
// Array<T>& Array<T>::operator=(const Array<T>& other)
// {
//     if (this != &other)
//     {
        
//     }
//     return (*this);
// }

template <typename T>
void    Array<T>::printArray()
{
    for (int i = 0; _array[i]; i++)
        std::cout << _array[i] << std::endl;
}