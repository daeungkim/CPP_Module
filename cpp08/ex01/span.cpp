/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 19:03:41 by seunkim           #+#    #+#             */
/*   Updated: 2020/10/03 20:11:57 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n)
    : size_(n)
{
}

Span::Span(const Span &ref)
{
    *this = ref;
}

Span& Span::operator=(const Span &ref)
{
    *this = ref;
    return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int num)
{   
    if (this->vec_.size() >= this->size_)
        throw std::out_of_range("\033[0;31mSpanException : vector is full\033[0m");
    this->vec_.push_back(num);
}

void Span::showElements()
{
    for (std::vector<int>::iterator i = this->vec_.begin(); i != this->vec_.end(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;
}

int Span::longestSpan()
{
    if (this->vec_.size() < 2)
        throw std::out_of_range("\033[0;31mSpanException : element need more than 2\033[0m");
    
    int max = *std::max_element(this->vec_.begin(), this->vec_.end());
    int min = *std::min_element(this->vec_.begin(), this->vec_.end());
    
    return (max - min);
}

int Span::shortestSpan()
{
    if (this->vec_.size() < 2)
        throw std::out_of_range("\033[0;31mSpanException : element need more than 2\033[0m");

    std::vector<int> sorted(this->vec_);
    
    std::sort(sorted.begin(), sorted.end());
    
    int ret = 2147483647;

    for (std::vector<int>::iterator i = sorted.begin(); i != sorted.end() - 1; i++)
    {
        if (ret > *(i+1) - *i)
            ret = *(i+1) - *i;
    }
    return (ret);
}