/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 21:33:23 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/26 20:50:55 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
    :count_(0), units_(NULL)
{
}

Squad::Squad(const Squad& ref)
    :count_(ref.getCount())
{
    // // 기존에 있던 유닛들이 있으면 모두 삭제
    // if (this->units_ != NULL)
    // {
    //     for (int i = 0; i < this->count_; i++)
    //     {   
    //         std::cout << this->units_[i] << std::endl;
    //         delete this->units_[i];
    //     }
    //     delete[] this->units_;
    // }

    // ref의 units와 다르 곳을 참조를 하는 units 생성
    this->units_ = new ISpaceMarine*[ref.getCount()];
    // ref가 가지고 있는 unit들고 새로운 유닛들 생성
    for (int i = 0; i < ref.getCount(); i++)
        this->units_[i] = ref.getUnit(i)->clone();
}

Squad& Squad::operator=(const Squad& ref)
{
    // 기존에 있던 유닛들이 있으면 모두 삭제
    if (this->units_ != NULL)
    {
        for (int i = 0; i < this->count_; i++)
            delete this->units_[i];
        delete[] this->units_;
    }

    // ref의 units와 다르 곳을 참조를 하는 units 생성
    this->units_ = new ISpaceMarine*[ref.getCount()];
    // ref가 가지고 있는 unit들고 새로운 유닛들 생성
    for (int i = 0; i < ref.getCount(); i++)
        this->units_[i] = ref.getUnit(i)->clone();

    this->count_ = ref.getCount();
    return (*this);
}

Squad::~Squad()
{
    if (this->units_ != NULL)
    {
        for (int i = 0; i < this->count_; i++)
            delete this->units_[i];
        delete[] this->units_;
    }
}

int Squad::getCount() const
{
    return (this->count_);
}

ISpaceMarine* Squad::getUnit(int index) const
{
    // 존재하는 유닛이면
    if (index >= 0 && index < this->count_)
        return (units_[index]);
    // 인덱스 범위에 벗어나는 경우
    else
        return (NULL);
}

int Squad::push(ISpaceMarine* unit)
{
    // 이미 유닛들이 있는 경우
    if(this->units_ != NULL)
    {
        // 기존 유닛 수 보다 한 칸 늘어난 units 배열 생성
        ISpaceMarine** new_units = new ISpaceMarine*[this->count_ + 1];
        // 기존에 있는 유닛들 새로운 units로 옮김.
        for (int i = 0; i < this->count_; i++)
            new_units[i] = this->units_[i];
        // 세로운 유닛 마지막 인덱스에 추가
        new_units[this->count_] = unit;
        
        // 기본 units 삭제
        delete[] this->units_;

        this->units_ = new_units;
    }
    // 처음 추가 하는 경우
    else
    {
        this->units_ = new ISpaceMarine*[1];
        this->units_[0] = unit;
    }
    this->count_ += 1;
    
    return (this->count_);
}