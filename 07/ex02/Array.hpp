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
#include <stdexcept>


template <class T>
class Array
{
private:
    T *_array;
    int _size;

public:
    Array() : _size(0) { _array = NULL; }
    Array(unsigned int n)
        : _size(n)
    {
        _array = new T[_size];
        for (unsigned int i = 0; i < n; i++)
            _array[i] = T();
    }
    ~Array() { delete[] _array; };
    Array(const Array &other)
    {
        this->_size = other._size;
        this->_array = new T[this->_size];
        for (int i = 0; i < this->_size; i++)
            _array[i] = other._array[i];
    }
    
    Array &operator=(const Array &other)
    {
        if (this != &other)
        {
            delete[] this->_array;
            this->_size = other._size;
            this->_array = new T[this->_size];
            for (int i = 0; i < this->_size; i++)
                _array[i] = other._array[i];
        }
        return (*this);
    }
    T &operator[](int index)
    {
        if (index < 0 || index >= _size)
            throw std::out_of_range("Bad index error");
        return (this->_array[index]);
    }
    int size()
    {
        return (_size);
    }
    void printArray()
    {
        for (int i = 0; i < _size; i++)
            std::cout << i << ": " << (*this)[i] << std::endl;
    }
};
#endif