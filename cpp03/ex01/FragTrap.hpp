/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 16:12:49 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/23 10:49:09 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <random>

class Fragtrap
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
        Fragtrap(std::string name);
        Fragtrap(const Fragtrap& ref);    // 복사 생성자
        ~Fragtrap();
        void        rangedAttack(std::string const& target);
        void        meleeAttack(std::string const& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        void        vaulthunter_dot_exe(std::string const &target);
};

#endif