/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephalbers <josephalbers@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:57:02 by josephalber       #+#    #+#             */
/*   Updated: 2023/09/11 12:06:26 by josephalber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include "Data.hpp"

#if !defined(__cplusplus) || __cplusplus < 201103L // C++98 or older
    typedef unsigned long uintptr_t; // Change this to match the size of pointers in your system
#endif

class Serializer
{
    private:
        Serializer();

    public:
        ~Serializer();
        Serializer(const Serializer& other);
        Serializer& operator=(const Serializer& other);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

};
#endif