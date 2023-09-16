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

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <list>
#include <cstdlib>

class Span
{
    private:
        std::vector<int>    _list;
        unsigned int        _maxSize;
        unsigned int        _size;

    public:
        Span(int n);
        ~Span();
        Span(const Span& other);
        Span& operator=(const Span& other);
        void addNumber(int num);
        void addNumberSorted(int num);
        int shortestSpan();
        int longestSpan();
        void printList();


};
#endif