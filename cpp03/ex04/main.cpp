/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 13:10:58 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/23 17:38:36 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int main(void)
{
    SuperTrap super("kim");

    super.showstats();

    super.meleeAttack("song");

    super.rangedAttack("lee");
} 