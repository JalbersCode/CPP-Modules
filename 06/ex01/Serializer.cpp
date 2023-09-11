/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephalbers <josephalbers@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:57:44 by josephalber       #+#    #+#             */
/*   Updated: 2023/09/11 12:09:51 by josephalber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::~Serializer()
{
}

Serializer::Serializer(const Serializer& other)
{
    (void)other;
}

Serializer& Serializer::operator=(const Serializer& other)
{
    if (this != &other)
    {
        
    }
    return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
    return (raw);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data*   ptr = reinterpret_cast<Data*>(raw);
    return (ptr);
}