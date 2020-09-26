/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 21:39:14 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/25 21:59:48 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine();
        TacticalMarine(const TacticalMarine& ref);
        TacticalMarine& operator=(const TacticalMarine& ref);
        ~TacticalMarine();

        ISpaceMarine*   clone() const;
        void            battleCry() const;
        void            rangedAttack() const;
        void            meleeAttack() const;  
}; 

#endif