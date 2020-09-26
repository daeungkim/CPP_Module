/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 21:38:03 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/27 03:08:57 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
    private:
        std::string name_;
        int         ap_cost_;
        int         damage_;

    public:
        AWeapon(std::string const& name, int ap_cost, int damage);
        AWeapon(const AWeapon& ref);
        AWeapon& operator=(const AWeapon& ref);
        virtual ~AWeapon();

        std::string getName() const;
        int getApCost() const;
        int getDamage() const;

        virtual void attack() const = 0;
};

# endif
