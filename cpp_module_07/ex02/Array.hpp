/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:01:15 by museo             #+#    #+#             */
/*   Updated: 2022/11/04 18:08:28 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
private:
	T *arr;
	unsigned int len; 
public:
	Array();
	Array(unsigned int n);
	Array(const Array &copy);
	Array &operator=(const Array &copy);
	~Array();

	T &operator[](unsigned int idx) const;
	unsigned int size() const;
};

template <typename T>
std::ostream &operator<<(std::ostream &out, const Array<T> &a);

#include "Array.tpp"

#endif
