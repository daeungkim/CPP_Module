/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 18:37:47 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/24 20:50:41 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Peon_HPP
# define Peon_HPP

# include "Victim.hpp"

class Peon : public Victim
{
    public:
        Peon(std::string name);
        Peon(const Peon& ref);
        Peon& operator=(const Peon& ref);
        virtual ~Peon();

        virtual void    getPolymorphed() const;
};

# endif