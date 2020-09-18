/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 13:24:01 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/18 15:02:19 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
    std::cout << "setType " << this->type << std::endl;
}

const std::string Weapon::getType()
{
    return type;
}