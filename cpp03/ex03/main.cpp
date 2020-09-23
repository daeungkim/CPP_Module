/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 13:10:58 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/23 14:59:03 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
    ClapTrap    clap("c");    
    FragTrap    frag("f");
    ScavTrap    scav("s");
    NinjaTrap   ninja("j");

    ninja.meleeAttack("kim");
    ninja.rangedAttack("song");
    ninja.takeDamage(60);
    ninja.beRepaired(10);

    ninja.ninjaShoebox(clap);
    ninja.ninjaShoebox(frag);
    ninja.ninjaShoebox(scav);
    ninja.ninjaShoebox(ninja); 
}