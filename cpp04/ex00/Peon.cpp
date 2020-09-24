/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 18:37:49 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/24 19:31:06 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) 
    : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon& ref)
    : Victim(ref)
{
    std::cout << "Zog zog." << std::endl; 
}

Peon& Peon::operator=(const Peon& ref)
{
    Victim::operator=(ref);
    return (*this);
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
    std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}