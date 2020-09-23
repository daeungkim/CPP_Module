/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 18:45:41 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/22 01:46:21 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Defalut constructor called" << std::endl;
    this->value_ = 0;
}

Fixed::Fixed(int const value)
{
    std::cout << "Int constructor called" << std::endl;
    std::cout << "value = " << value << " bit = " << std::bitset<32>(value) << std::endl;
    this->value_ = (value << BITS);
    std::cout << "this->value_ = " << this->value_ << " bit = " << std::bitset<32>(this->value_) << std::endl;
}

Fixed::Fixed(float const value)
{
    std::cout << "Float constructor called" << std::endl;
    std::cout << "value = " << value << " bit = " << std::bitset<32>(value) << std::endl;
    this->value_ = roundf(value * (1 << this->BITS));
    std::cout << "this->value_ = " << this->value_ << " bit = " << std::bitset<32>(this->value_) << std::endl;
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

int Fixed::toInt() const
{
    return (this->value_ >> BITS);
}

float Fixed::toFloat() const
{
    return ((float)this->value_ / (1 << this->BITS));
}

std::ostream& operator << (std::ostream& os, const Fixed& ref)
{
    os << ref.toFloat();
    return (os);    
}
