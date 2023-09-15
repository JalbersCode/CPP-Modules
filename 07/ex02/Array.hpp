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

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
    private:
        T *_array;
        int _size;

    public:
        Array() {_array = NULL;}
        Array(unsigned int n)
            : _size(n)
        {
            
            //recap this!!!!
            
            _array = new T[_size];
            // unsigned int i = 0;
            // while (i < n)
            // {
            //     _array[i] = new T();
            //     i++;
            // }
            // _size = i;
        }
        ~Array(){};
        // Array(const Array& other);
        // Array& operator=(const Array& other);
        void printArray()
        {
            for (int i = 0; i < _size; i++)
                std::cout << *(_array + i) << std::endl;
        }

};
#endif