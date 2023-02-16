/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:24:47 by museo             #+#    #+#             */
/*   Updated: 2022/11/06 12:12:06 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <stdexcept>
# include <algorithm>
# include <iterator>

template <typename T>
int easyfind(T &container, int find)
{
	typename T::iterator it;
	typename T::iterator s = container.begin();
	typename T::iterator e = container.end();

	it = std::find(s, e, find);
	if (it != e)
	{
		std::cout << "The " << it - s + 1 << "th element is " << find << std::endl;
		return (it - s);
	}
	else
		throw std::out_of_range("Not found!!!!");
}

#endif
