/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 19:03:39 by seunkim           #+#    #+#             */
/*   Updated: 2020/10/07 01:01:39 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void)
{
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    sp.showElements();
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    try
    {
        sp.addNumber(100);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "=======================================" << std::endl;

    Span test(10000);
    std::vector<int> vec;
    
    for (int i = 0; i < 10000; i++)
        vec.push_back(rand() % 100000);
    
    test.addNumber(vec.begin(), vec.end());

    test.showElements();

    std::cout << test.shortestSpan() << std::endl;
    std::cout << test.longestSpan() << std::endl;
}