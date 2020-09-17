/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 15:52:39 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/17 21:58:16 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

PONY::PONY(std::string name)
{
    this->name = name;
    std::cout << "Pony " << this->name << " created" << std::endl;
}

PONY::~PONY()
{
    std::cout << "Pony " << this->name << " destroyed" << std::endl;
}

std::string PONY::getName(void)
{
    return name;
}
