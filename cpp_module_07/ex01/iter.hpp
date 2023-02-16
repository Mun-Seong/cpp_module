/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:31:13 by museo             #+#    #+#             */
/*   Updated: 2022/11/04 16:57:17 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

# include <cstdlib>
# include <iostream>

template <typename T, typename F>
void iter(T *arr, size_t len, F f)
{
	for (size_t i=0; i<len; i++)
		f(arr[i]);
}

/** test func */
template<typename T>
void plusA(T &elem)
{
	elem += 'A';
}

template<typename T>
void print(T &elem)
{
	std::cout << elem << " ";
}

#endif
