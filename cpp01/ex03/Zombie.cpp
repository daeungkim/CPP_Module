/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 22:13:26 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/18 01:28:02 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie created" << std::endl;
}

Zombie::Zombie(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
    std::cout << "Zombie " << name << "(" << type << ") created" << std::endl;
}

void Zombie::setAttr(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
}

void Zombie::announce(void)
{
    std::cout << "\033[0;31m<" << name << " (" << type << ")> Braiiiiiiinnnssss....\033[0m" << std::endl;
}