/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 13:10:58 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/23 14:06:55 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    FragTrap frag("Kim");

    frag.meleeAttack("song");
    frag.rangedAttack("lee");
    frag.takeDamage(60);
    frag.showstats();
    frag.takeDamage(60); 
    frag.showstats();
    frag.beRepaired(120);
    frag.showstats();
    frag.vaulthunter_dot_exe("hong");
    frag.vaulthunter_dot_exe("gil"); 
    frag.showstats();
    frag.vaulthunter_dot_exe("hong");
    frag.vaulthunter_dot_exe("gil"); 
    frag.vaulthunter_dot_exe("hong");
    frag.vaulthunter_dot_exe("gil"); 

    std::cout << "================================================================" << std::endl;

    ScavTrap scav("Song");
    
    scav.meleeAttack("song");
    scav.rangedAttack("lee");
    scav.takeDamage(70);
    scav.showstats();
    scav.takeDamage(70); 
    scav.showstats();
    scav.beRepaired(140);
    scav.showstats();
    scav.challengeNewcomer();
    scav.challengeNewcomer();
    scav.challengeNewcomer();
}