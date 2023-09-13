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

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>
#include <time.h>

Base *generate(void)
{
    Base *base;

    srand(time(NULL));
    int num = rand() % 3;
    switch (num)
    {
    case 0:
        base = new A;
        break;
    case 1:
        base = new B;
        break;
    case 2:
        base = new C;
        break;
    }
    return (base);
}

void identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Im A.\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "Im B.\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "Im C.\n";
}

void identify(Base& p)
{
    try
    {
        A a = dynamic_cast<A&>(p);
        std::cout << "Im A.\n";
    }
    catch(const std::exception& e) {}
    try
    {
        B b = dynamic_cast<B&>(p);
        std::cout << "Im B.\n";
    }
    catch(const std::exception& e) {}
    try
    {
        C c = dynamic_cast<C&>(p);
        std::cout << "Im C.\n";
    }
    catch(const std::exception& e) {}
}

int main(void)
{
    Base *base = generate();
    identify(base);
    identify(*base);
    return (0);
}