/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 00:53:47 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/27 01:50:44 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* sources_[4];
        
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& ref);
        MateriaSource& operator=(const MateriaSource& ref);
        ~MateriaSource();

        void        learnMateria(AMateria* m);
        AMateria*   createMateria(std::string const& type);
};

#endif
