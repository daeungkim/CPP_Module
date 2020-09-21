/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 15:42:52 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/21 17:36:15 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Defalut constructor called" << std::endl;
    this->value_ = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& ref)
{
    std::cout << "Copy constructor called" << std::endl;
    this->value_ = ref.value_;
}

Fixed& Fixed::operator=(const Fixed& ref)
{
    std::cout << "Assignation operator called" << std::endl;
    this->value_ = ref.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value_);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value_ = raw;
}