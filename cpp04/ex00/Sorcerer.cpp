/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 23:30:33 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/24 20:50:06 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
    :name_(name), title_(title)
{
    std::cout << this->name_ << ", "
              << this->title_ << ", is born! "
              << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& ref)
{
    *this = ref;
}

Sorcerer& Sorcerer::operator=(const Sorcerer& ref)
{
    this->name_ = ref.name_;
    this->title_ = ref.title_;
    return (*this);    
}

Sorcerer::~Sorcerer()
{
    std::cout << this->name_ << ", "
              << this->title_ << ","
              << "is dead. Consequences will never be the same!"
              << std::endl;
}

std::string Sorcerer::introduce() const
{
    std::string msg;
    
    msg = "I am " + this->getName() + ", " + this->getTitle() + ", and I like ponies!";
    return (msg);
}

std::string Sorcerer::getName() const
{
    return (this->name_);
}

std::string Sorcerer::getTitle() const
{
    return (this->title_);
}

std::ostream& operator<<(std::ostream& out, const Sorcerer& sorcerer)
{   
    // introduce() 에 const 를 붙여야 함.
    return (out << sorcerer.introduce() << std::endl);
}

void Sorcerer::polymorph(Victim const& victim) const
{
    victim.getPolymorphed();
}
