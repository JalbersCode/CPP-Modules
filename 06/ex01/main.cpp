/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephalbers <josephalbers@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:59:32 by josephalber       #+#    #+#             */
/*   Updated: 2023/09/11 12:22:17 by josephalber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
    Data        data;
    uintptr_t   raw = Serializer::serialize(&data);
    Data*       ptr1 = Serializer::deserialize(raw);
    
    std::cout << &data << std::endl;
    std::cout << raw << std::endl;
    std::cout << ptr1 << std::endl;
        
    return (0);
}