/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:09:31 by museo             #+#    #+#             */
/*   Updated: 2022/11/05 17:37:54 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

# include "Array.hpp"

template<typename T>
Array<T>::Array() {
	this->arr = NULL;
	this->len = 0;
	std::cout << "Defualt Constructor (without param) called" << std::endl;
}

template<typename T>
Array<T>::~Array() {
	delete[] (arr);
	arr = NULL;
	std::cout << "Destructor called" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) {
	this->len = n;
	this->arr = new T[len];
	std::cout << "Defualt Constructor (with param) called" << std::endl;
}

template<typename T>
Array<T>::Array(const Array &copy) : arr(NULL) {
	*this = copy;
	std::cout << "Copy Constructor called" << std::endl;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &copy) {
	if (this == &copy)
		return (*this);
	delete[] (this->arr);
	this->len = copy.len;
	this->arr = new T[this->len];
	for (unsigned int i=0; i<this->len; i++)
		this->arr[i] = copy.arr[i];
	std::cout << "Copy assigment operator called" << std::endl;
	return (*this);
}

template<typename T>
T &Array<T>::operator[](unsigned int idx) const
{
	if (idx < 0 || idx >= len)
		throw std::out_of_range("Array out of range!!!!!!");
	return (arr[idx]);
}

template<typename T>
unsigned int Array<T>::size() const
{
	return (this->len);
}

template<typename T>
std::ostream &operator<<(std::ostream &out, const Array<T> &a)
{
	for (unsigned int i=0; i<a.size(); i++)
		out << "arr[" << i << "] = " << a[i] << std::endl;
	return (out);
}

#endif
