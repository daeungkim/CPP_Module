/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 11:51:53 by seunkim           #+#    #+#             */
/*   Updated: 2020/10/02 16:15:41 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
    private:
        T               *arr_;
        unsigned int    n_;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array &ref);
        Array& operator=(const Array &ref);
        T & operator[](unsigned int idx) const;

        class IndexOutOfRange : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        
        unsigned int    size() const;
};

template <typename T>
Array<T>::Array()
    : n_(0)
{
    this->arr_ = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n)
    : n_(n)
{
    this->arr_ = new T[n];
}

template <typename T>
Array<T>::Array(const Array &ref)
    : n_(ref.size())
{
    if (this->n_ != 0)
    {
        this->arr_ = new T[this->n_];
        for (unsigned int i = 0; i < this->n_; i++)
            this->arr_[i] = T(ref.arr_[i]);
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array &ref)
{
    // 기존 것 삭제
    delete[] (this->arr_);
    this->n_ = ref.size();
    this->arr_ = new T[ref.size()];
    for (unsigned int i = 0; i < this->n_; i++)
        this->arr_[i] = ref.arr_[i];
    return (*this);
}

template <typename T>
T& Array<T>::operator[](unsigned int idx) const
{   
    if (idx >= this->n_)
        throw Array<T>::IndexOutOfRange();
    
    return (this->arr_[idx]);
}

template <typename T>
const char* Array<T>::IndexOutOfRange::what() const throw()
{
    return "\033[1;31mArrayExecption: index out of range\033[0m";
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (this->n_);
}

#endif