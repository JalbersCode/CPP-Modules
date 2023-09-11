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

class Serializer
{
    private:


    public:
        Serializer();
        ~Serializer();
        Serializer(const Serializer& other);
        Serializer& operator=(const Serializer& other);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

};
#endif