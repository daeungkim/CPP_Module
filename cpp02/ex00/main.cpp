/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 15:42:57 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/21 17:34:20 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed b(a);
    Fixed c;
    
    c = b;
    
    std::cout << a.getRawBits() << std::endl; 
    std::cout << b.getRawBits() << std::endl; 
    std::cout << c.getRawBits() << std::endl;

    return 0;
}