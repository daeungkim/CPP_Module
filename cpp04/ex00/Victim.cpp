/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 15:26:54 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/24 16:16:39 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name)
    :name_(name)
{
    std::cout << "Some random victim called " 
              << this->name_ 
              << " just appeard!" << std::endl;
}

Victim::Victim(const Victim& ref)
{
    *this = ref;
}

Victim& Victim::operator=(const Victim& ref)
{
    this->name_ = ref.name_;
    return (*this);
}

Victim::~Victim()
{
    std::cout << "Victim " << this->name_
              << " just died for no apparent reason!"
              << std::endl;
}

std::string Victim::introduce() const
{
    std::string msg;

    msg = "I'm " + this->getName() + " and I like otters!";
    return (msg);    
}

std::string Victim::getName() const
{
    return (this->name_);
}

void Victim::getPolymorphed() const
{
    std::cout << this->getName() << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Victim& victim)
{
    return (out << victim.introduce() << std::endl);
}


