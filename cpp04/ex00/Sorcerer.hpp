/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 23:30:35 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/24 19:54:00 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
    private:
        std::string name_;
        std::string title_;
    
    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer(const Sorcerer& ref);
        Sorcerer& operator=(const Sorcerer& ref);
        ~Sorcerer();

        std::string introduce() const;
        std::string getName() const;
        std::string getTitle() const; 
        
        void polymorph(Victim const& victim) const;
        
};

std::ostream& operator<<(std::ostream& out, const Sorcerer& sorcerer);

# endif