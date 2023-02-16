/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:42:20 by museo             #+#    #+#             */
/*   Updated: 2022/11/01 14:42:21 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
	: x(Fixed(0)), y(Fixed(0))
{ //std::cout << "Point Default constructor called" << std::endl; 
}

Point::Point(const float xx, const float yy)
	: x(Fixed(xx)), y(Fixed(yy))
{ //std::cout << "Point Having param constructor called" << std::endl; 
}

Point::Point(const Fixed xx, const Fixed yy)
	: x(xx), y(yy)
{ //std::cout << "Point Having param constructor called" << std::endl; 
}

Point::Point(const Point &copy)
	: x(copy.x), y(copy.y)
{ //std::cout << "Point Copy constructor called" << std::endl; 
}

Point &Point::operator=(const Point &copy) {
	if (this != &copy)
	{
		const_cast<Fixed &>(x) = copy.x;
		const_cast<Fixed &>(y) = copy.y;
	}
	//std::cout << "Point Copy assignment operator called" << std::endl;
	return *this;
}

Point::~Point()
{ //std::cout << "Point Destructor called" << std::endl; 
}

Fixed Point::getX() const { return x; }
Fixed Point::getY() const { return y; }

Fixed Point::crossProduct(Point &p) {
	//std::cout << "cross Produect : this " << this->getX() << ", " << this->getY() << " | p " << p.getX() << ", " << p.getY() << std::endl;
	Fixed crossZ((getX() * p.getY()) - (p.getX() * getY()));
	//std::cout << crossZ << std::endl;
	return (crossZ);
}

Point Point::operator-(const Point &p) const {
	Point minus(getX() - p.getX(), getY() - p.getY());
	return (minus);
}
