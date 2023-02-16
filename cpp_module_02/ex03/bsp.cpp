/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:42:26 by museo             #+#    #+#             */
/*   Updated: 2022/11/01 14:42:51 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool isSameSide(Point a, Point b, Point c, Point p)
{
	Point ab = b - a;
	Point ap = p - a;
	Point ac = c - a;

	Fixed f1 = ab.crossProduct(ap);
	Fixed f2 = ab.crossProduct(ac);
	std::cout << "ab X ap = " << f1 << " | " << "ab X ac = " << f2 << std::endl;
	return f1 * f2 > 0;
}
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (isSameSide(a, b, c, point) && isSameSide(b, c, a, point) && isSameSide(c, a, b, point))
		return true;
	return false;
}