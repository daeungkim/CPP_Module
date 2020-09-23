/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 11:47:44 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/23 13:24:11 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap   // 상속 선언
{
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap& ref);    
        ~FragTrap();

        void vaulthunter_dot_exe(std::string const &target);
};

#endif