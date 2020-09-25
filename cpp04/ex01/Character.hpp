/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 15:30:56 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/25 16:33:58 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
    private:
        std::string     name_;
        int             ap_;
        AWeapon         *weapon_;
    
    public:
        Character(std::string const& name);
        Character(const Character& ref);
        Character& operator=(const Character& ref);
        ~Character();

        void            recoverAp();
        void            equip(AWeapon* weapon);
        void            attack(Enemy* enemy);
        std::string     getName() const;
        int             getAp() const;
        AWeapon*        getWeapon() const;
};

std::ostream const& operator<<(std::ostream& out, Character& character); 

#endif