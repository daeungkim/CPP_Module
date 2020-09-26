/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 22:07:36 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/27 02:48:11 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character(std::string name)
    : name_(name)
{
    // 아이템 nullptr로 초기화
    for (int i = 0; i < 4; i++)
        this->items_[i] = nullptr;
}

Character::Character(const Character& ref)
    : name_(ref.getName())
{
    for (int i = 0; i < 4; i++)
    {
        if (ref.items_[i] == nullptr)
            this->items_[i] = nullptr;
        else
            this->items_[i] = ref.items_[i]->clone();
    }
}

Character& Character::operator=(const Character& ref)
{
    // 이름 복사
    this->name_ = ref.getName();

    // 아이템 복사
    for (int i = 0; i < 4; i++)
    {
        if (ref.items_[i] == nullptr)
            this->items_[i] = nullptr;
        else
            this->items_[i] = ref.items_[i]->clone();
    }
    return (*this);
}

Character::~Character()
{
}

std::string const& Character::getName() const
{
    return (this->name_);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {   
        // 아이템이 비어 있는 곳에 아이템 장착 후 리턴
        if (this->items_[i] == nullptr)
        {
            this->items_[i] = m;
            return ;
        }
    }
    std::cout << "items full!!" << std::endl;
}

void Character::unequip(int idx)
{
    this->items_[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
    if (this->items_[idx] == nullptr)
    {
        std::cout << "No item!!" << std::endl;
        return ;
    }
    this->items_[idx]->use(target);
}