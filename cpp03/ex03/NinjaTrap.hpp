/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 14:26:26 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/23 14:36:52 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
    public:
        NinjaTrap(std::string name);
        NinjaTrap(const NinjaTrap& ref);
        ~NinjaTrap();

        void ninjaShoebox(ClapTrap& target);
        void ninjaShoebox(FragTrap& target);
        void ninjaShoebox(ScavTrap& target);
        void ninjaShoebox(NinjaTrap& target);
};

#endif