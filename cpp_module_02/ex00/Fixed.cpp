/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:11:19 by museo             #+#    #+#             */
/*   Updated: 2022/10/27 18:00:35 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fraction = 8;

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->integer = 0;
    return ;
}

Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called" << std::endl;
    this->integer = f.getRawBits();
    return ;
}

Fixed& Fixed::operator=(const Fixed &f) {
    std::cout << "Copy assignment called" << std::endl;
    if (this != &f)
        this->integer = f.getRawBits();
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

