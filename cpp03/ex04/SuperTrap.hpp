/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 16:49:55 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/23 17:11:59 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
    public:
        SuperTrap(std::string name);
        SuperTrap(const SuperTrap& ref);
        ~SuperTrap();
    
        void        rangedAttack(std::string const& target);
        void        meleeAttack(std::string const& target);
};

#endif