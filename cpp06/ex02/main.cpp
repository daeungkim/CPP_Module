/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 22:40:57 by seunkim           #+#    #+#             */
/*   Updated: 2020/10/02 00:37:04 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 2);

    int num = dis(gen);
    
    if (num == 0)
        return ((new A));
    else if (num == 1)
        return ((new B));
    else if (num == 2)
        return ((new C));
    return (nullptr);
}

void identify_from_pointer(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify_from_reference(Base& p)
{
    identify_from_pointer(&p);
}

int main(void)
{
    Base *base = generate();
    Base &ref = *base;

    identify_from_pointer(base);
    identify_from_reference(ref);

    Base *base2 = generate();
    Base &ref2 = *base2;

    identify_from_pointer(base2);
    identify_from_reference(ref2);
    
}
