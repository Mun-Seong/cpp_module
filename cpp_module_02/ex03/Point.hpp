/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:42:03 by museo             #+#    #+#             */
/*   Updated: 2022/11/01 14:42:04 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	const Fixed x;
	const Fixed y;
public:
	Point();
	Point(const float xx, const float yy);
	Point(const Fixed xx, const Fixed yy);
	Point(const Point &copy);
	Point &operator=(const Point &copy);
	~Point();

	Fixed getX() const;
	Fixed getY() const;
	Fixed crossProduct(Point &p);
	Point operator-(const Point &p) const;
};

#endif