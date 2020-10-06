/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 20:58:49 by seunkim           #+#    #+#             */
/*   Updated: 2020/10/04 05:05:31 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>

int main(void)
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "mstack.top() = " << mstack.top() << std::endl;
    
    mstack.pop();
    
    std::cout << "mstack.size() = " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    std::cout << "mstack = ";
    while (it != ite)
    {
        std::cout << *it << " ";
        ++it;
    }

    std::cout << std::endl;

    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();

    rit++;
    rit--;
    std::cout << "mstack = ";
    while (rit != rite)
    {
        std::cout << *rit << " ";
        ++rit;
    } 
    
    std::cout << std::endl;

    int a(1);

    std::stack<int> s(mstack);

    s.push(3);
    s.push(5);
    s.push(7);

    std::cout << "s.top() = " << s.top() << std::endl;
    std::cout << "s.size() = " << s.size() << std::endl;

    return 0;
}