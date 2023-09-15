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

#include "Array.hpp"
#include <iostream>

struct MyStruct
{
    int _num;
    std::string _str;
    MyStruct() :_num(5), _str("Init str") {}
    void   operator=(const std::string& new_str)
    {
        _str = new_str;
    }
};

std::ostream& operator<<(std::ostream& os, const MyStruct& obj)
{
    os << obj._str;
    return os;
}

int	main(void)
{
    try
    {
        Array<std::string> array(3);
        array[2] = "Changed";
        Array<MyStruct> array2(3);
        Array<MyStruct> array3(array2);
        // array3 = array2;
        array2[2]._str = "Changed after copy/assignment";
        std::cout << "Test: " << array2[0] << std::endl;
        array.printArray();
        std::cout << "Size: " << array.size() << std::endl;
        array2.printArray();
        std::cout << "Size: " << array2.size() << std::endl;
        array3.printArray();
        std::cout << "Size: " << array3.size() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}