/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephalbers <josephalbers@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:04:12 by josephalber       #+#    #+#             */
/*   Updated: 2023/09/10 21:26:51 by josephalber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char const *argv[])
{
    // if (argc != 2)
    //     return (0);
    // ScalarConverter::convert(argv[1]);

    std::cout << std::endl;
    std::cout << "Tests:" << std::endl;
    std::cout << std::endl;
    ScalarConverter::convert("-45");
    std::cout << std::endl;
    ScalarConverter::convert("5");
    std::cout << std::endl;
    ScalarConverter::convert("130f");
    std::cout << std::endl;
    ScalarConverter::convert("130.3442f");
    std::cout << std::endl;
    ScalarConverter::convert("-234678346943569649356784365934692645978777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777");
    std::cout << std::endl;
    ScalarConverter::convert("X");

    return 0;
}
