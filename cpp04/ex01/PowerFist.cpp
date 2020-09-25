/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 22:18:48 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/25 17:20:31 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist()
    : AWeapon("Power Fist", 8, 50)
{
    std::cout << "PowerFist created!" << std::endl;
}

PowerFist::~PowerFist()
{
    std::cout << "PowerFist destoryed!" << std::endl;
}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}