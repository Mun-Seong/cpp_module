/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:11:29 by museo             #+#    #+#             */
/*   Updated: 2022/10/27 18:08:25 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fraction = 8;

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->integer = 0;
    return ;
}

Fixed::Fixed(const int iv) {
    this->integer = iv << Fixed::fraction;
    std::cout << "Int constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const float fv) {
    this->integer = static_cast<int>(fv * (1 << Fixed::fraction));
    std::cout << "Float constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &f) {
    std::cout << "Copy constructor called" << std::endl;
    this->integer = f.integer;
    return ;
}

Fixed& Fixed::operator=(const Fixed &f) {
    std::cout << "Copy assignment called" << std::endl;
    if (this != &f)
        this->integer = f.integer;
    return *this;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return integer;
}

void Fixed::setRawBits(int const raw) {
    this->integer = raw;
    return ;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

float Fixed::toFloat( void ) const {
    return (static_cast<float>(integer)/ static_cast<float>(1 << Fixed::fraction));
}

int Fixed::toInt( void ) const {
    return (integer >> Fixed::fraction);
}

std::ostream& operator<<(std::ostream &ost, Fixed const &f) {
    ost << f.toFloat();
    return (ost);
}
