/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 11:17:40 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/23 11:20:29 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    Fragtrap fragtrap("Frag");
    
    fragtrap.meleeAttack("song");
    fragtrap.meleeAttack("sing");
    fragtrap.rangedAttack("kim");
    fragtrap.takeDamage(40);
    fragtrap.takeDamage(40);
    fragtrap.takeDamage(40);
    fragtrap.beRepaired(60);
    fragtrap.beRepaired(60);
    fragtrap.vaulthunter_dot_exe("kong");
    fragtrap.vaulthunter_dot_exe("lee");
    fragtrap.vaulthunter_dot_exe("park");

    std::cout << "============================================" << std::endl;

    Scavtrap scavtrap("Scav");
    scavtrap.meleeAttack("song");
    scavtrap.meleeAttack("sing");
    scavtrap.rangedAttack("kim");
    scavtrap.takeDamage(40);
    scavtrap.takeDamage(40);
    scavtrap.takeDamage(40);
    scavtrap.beRepaired(60);
    scavtrap.beRepaired(60);
    scavtrap.challengeNewcomer();
    scavtrap.challengeNewcomer();
    scavtrap.challengeNewcomer();
    scavtrap.challengeNewcomer();
}