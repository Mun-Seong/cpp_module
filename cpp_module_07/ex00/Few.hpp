/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Few.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:20:13 by museo             #+#    #+#             */
/*   Updated: 2022/11/04 16:27:13 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FEW_HPP
#define FEW_HPP

template <typename T>
void swap(T &a, T &b)
{
	T t;
	t = a;
	a = b;
	b = t;
}

template <typename T>
T max(T &a, T &b)
{
	if (a > b)
		return (a);
	return (b);
}

template <typename T>
T min(T &a, T &b)
{
	if (a < b)
		return (a);
	return (b);
}


#endif
