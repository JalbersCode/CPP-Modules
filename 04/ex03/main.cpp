/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:31:21 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/17 17:37:26 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main(void)
{
    Character char1 = Character("Barack");
    std::cout <<  "Hi my name is " << char1.getName() << std::endl;    
    return (0);
}