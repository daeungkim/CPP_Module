/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 11:04:55 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/23 11:13:21 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <random>

class Scavtrap
{
    private:
        int         hit_points_;
        int         max_hit_points_;
        int         energy_points_;
        int         max_energy_points_;
        int         level_;
        std::string name_;
        int         melee_attack_damage_;       // 근접 공격력
        int         ranged_attack_damage_;      // 원거리 공격력
        int         armor_damage_reduction_;    // 방어력(갑옷)

    public:
        Scavtrap(std::string name);
        Scavtrap(const Scavtrap& ref);    // 복사 생성자
        ~Scavtrap();
        void        rangedAttack(std::string const& target);
        void        meleeAttack(std::string const& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        void        challengeNewcomer();
};

#endif