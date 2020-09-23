/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 13:23:53 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/18 21:28:35 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon_(weapon)
{
    this->name = name;
}

void HumanA::attack()
{
    std::cout << "\033[0;31m" << name << " attacks with his " << weapon_.getType() << "\033[0m" << std::endl;
}
 