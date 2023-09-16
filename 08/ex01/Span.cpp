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

#include "Span.hpp"

Span::Span(int n)
    : _maxSize(n), _size(0)
{
}

Span::~Span()
{
}

Span::Span(const Span& other)
{
    (void)other;
}

Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        
    }
    return (*this);
}

void Span::addNumber(int num)
{
    if (_size >= _maxSize)
        throw std::runtime_error("List full");
    _list.push_back(num);
    _size++;
}


void Span::addNumberSorted(int num)
{
    if (_size >= _maxSize)
        throw std::runtime_error("List full");
    else
    {
        unsigned int i = 0;

        while (i < _size && num > _list[i])
            i++;
        _list.insert(_list.begin() + i, num);
        _size++;
    }
}

void    Span::printList()
{
    for (unsigned int i = 0; i < _size; i++)
        std::cout << _list[i] << std::endl;
}

int Span::shortestSpan()
{
    int             shortestSpan;
    int             currentSpan;
    unsigned int    i = 2;

    if (_size <= 1)
        throw std::runtime_error("Not enough elements to calculate a span");
    shortestSpan = std::abs(_list[1] - _list[0]);
    while (i < _size)
    {
        currentSpan = std::abs(_list[i] - _list[i - 1]);
        if (currentSpan < shortestSpan)
            shortestSpan = currentSpan;
        i++;
    }
    return (shortestSpan);
}

int Span::longestSpan()
{
    int             longestSpan;
    int             currentSpan;
    unsigned int    i = 2;

    if (_size <= 1)
        throw std::runtime_error("Not enough elements to calculate a span");
    longestSpan = std::abs(_list[1] - _list[0]);
    while (i < _size)
    {
        currentSpan = std::abs(_list[i] - _list[i - 1]);
        if (currentSpan > longestSpan)
            longestSpan = currentSpan;
        i++;
    }
    return (longestSpan);
}