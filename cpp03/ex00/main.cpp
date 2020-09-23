/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 16:12:52 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/23 11:00:23 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    Fragtrap fragtrap("steven");
    
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
}