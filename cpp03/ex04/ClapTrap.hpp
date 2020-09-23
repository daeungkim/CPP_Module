/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 11:33:45 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/23 14:45:51 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <random>

class ClapTrap
{
    protected:      // 상속 받은 클래스에서는 접근 가능!
        int         hit_points_;
        int         max_hit_points_;
        int         max_energy_points_;
        int         level_;
        int         energy_points_;
        std::string name_;
        int         melee_attack_damage_;
        int         ranged_attack_damage_;    
        int         armor_damage_reduction_;

    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& ref);
        ~ClapTrap();
        std::string getName() const;
        void        rangedAttack(std::string const& target);
        void        meleeAttack(std::string const& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        void        showstats();
};

#endif