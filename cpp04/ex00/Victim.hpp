/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 15:26:56 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/24 20:50:29 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
    private:
        std::string name_;

    public:
        Victim(std::string name);
        Victim(const Victim& ref);
        Victim& operator=(const Victim& ref);
        virtual ~Victim();
        
        std::string     introduce() const;
        std::string     getName() const;
        virtual void    getPolymorphed() const;
};

std::ostream& operator<<(std::ostream& out, const Victim& victim);

#endif