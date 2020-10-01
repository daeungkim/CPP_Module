/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 23:33:33 by seunkim           #+#    #+#             */
/*   Updated: 2020/10/01 16:42:23 by seunkim          ###   ########.fr       */
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
    std::cout << "char: ";
    int ret;

    try
    {
        ret = stoi(this->input_);
    }
    catch(const std::exception& e)
    {
        std::cout << "impossible" << std::endl;
        return ;
    }
    if (ret > 32 && ret < 127)
        std::cout << "'" << static_cast<char>(ret) << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
}

void Convertor::printToInt()
{
    std::cout << "int: ";
    int     ret;

    try
    {
        ret = stoi(this->input_);
    }
    catch(const std::exception& e)
    {
        std::cout << "impossible" << std::endl;
        return ;
    }
    std::cout << ret << std::endl;
}

void Convertor::printToFloat()
{
    std::cout << "float: ";
    float ret;

    try
    {
        ret = stof(this->input_);
    }
    catch(const std::out_of_range& e)
    {
        std::cout << "inff" << std::endl;
        return ;
    }
    catch(const std::invalid_argument& e)
    {
        std::cout << "nanf" << std::endl;
        return ;
    }
    if (ret - static_cast<int>(ret) == 0)
        std::cout << ret << ".0f" << std::endl;
    else
        std::cout << ret << "f" << std::endl;
}

void Convertor::printToDouble()
{
    std::cout << "double: ";
    double ret;

    try
    {
        ret = stod(this->input_);
    }
    catch(const std::out_of_range& e)
    {
        std::cout << "inf" << std::endl;
        return ;
    }
    catch(const std::invalid_argument& e)
    {
        std::cout << "nan" << std::endl;
        return ;
    }
    if (ret - static_cast<int>(ret) == 0)
        std::cout << ret << ".0" << std::endl;
    else
        std::cout << ret << std::endl;
}
