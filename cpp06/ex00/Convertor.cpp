/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 23:33:33 by seunkim           #+#    #+#             */
/*   Updated: 2020/10/01 01:17:00 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

Convertor::Convertor(std::string input)
    : input_(input)
{
}

Convertor::Convertor(const Convertor &ref)
{
    this->input_ = ref.input_;
}

Convertor& Convertor::operator=(const Convertor &ref)
{
    this->input_ = ref.input_;
    return (*this);
}

Convertor::~Convertor()
{
}

void Convertor::printToChar()
{
    int ret;

    try
    {
        ret = stoi(this->input_);
    }
    catch(const std::exception& e)
    {
        std::cout << "impossible" << std::endl;
    }
    if ()
}