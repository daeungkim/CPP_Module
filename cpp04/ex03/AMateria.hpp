/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 21:05:26 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/27 01:58:14 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>

class AMateria
{
    private:
        std::string     type_;
        unsigned int    xp_;

    public:
        AMateria(std::string const& type);
        AMateria(const AMateria& ref);
        AMateria& operator=(const AMateria& ref);
        virtual ~AMateria();

        std::string const&  getType() const;
        unsigned int        getXp() const;

        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);
};

#endif
