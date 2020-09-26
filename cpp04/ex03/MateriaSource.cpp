/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 00:53:45 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/27 01:56:04 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->sources_[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource& ref)
{
    for (int i = 0; i < 4; i++)
    {
        if (ref.sources_[i] == nullptr)
            this->sources_[i] = nullptr;
        else
            this->sources_[i] = ref.sources_[i]->clone();
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& ref)
{
    for (int i = 0; i < 4; i++)
    {
        if (ref.sources_[i] == nullptr)
            this->sources_[i] = nullptr;
        else
            this->sources_[i] = ref.sources_[i]->clone();
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->sources_[i] != nullptr)
            delete this->sources_[i];
    }
}

void MateriaSource::learnMateria(AMateria* m)
{   
    // 새로운 머터리아 넣기
    for (int i = 0; i < 4; i++)
    {
        if (this->sources_[i] == nullptr)
        {
            this->sources_[i] = m;
            return ;
        }
    }
    std::cout << "sources are full!!" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    for (int i = 0; i < 4; i++)
    {   // 타입이 같으면
        if (this->sources_[i]->getType() == type)
            return (this->sources_[i]);
    }
    std::cout << "no match type!!" << std::endl;
    return (nullptr);
}