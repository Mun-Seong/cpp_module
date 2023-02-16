/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:11:37 by museo             #+#    #+#             */
/*   Updated: 2022/11/01 14:45:57 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fraction = 8;

Fixed::Fixed() {
    //std::cout << "Default constructor called" << std::endl;
    this->integer = 0;
    return ;
}

Fixed::Fixed(const int iv) {
    this->integer = iv << Fixed::fraction;
    //std::cout << "Int constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const float fv) {
    float y = fv * static_cast<float>(static_cast<int> (1 << fraction));
    this->integer = static_cast<int>(roundf(y));
    //std::cout << "Float constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &f) {
    //std::cout << "Copy constructor called" << std::endl;
    this->integer = f.integer;
    return ;
}

Fixed& Fixed::operator=(const Fixed &f) {
    //std::cout << "Copy assignment called" << std::endl;
    if (this != &f)
        this->integer = f.integer;
    return *this;
}

int Fixed::getRawBits( void ) const {
    //std::cout << "getRawBits member function called" << std::endl;
    return integer;
}

void Fixed::setRawBits(int const raw) {
    this->integer = raw;
    return ;
}

Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
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

Fixed Fixed::operator+(const Fixed &f) const{
    Fixed ret;
    ret.setRawBits(this->getRawBits() + f.getRawBits());
    return (ret);
}

Fixed Fixed::operator-(const Fixed &f) const{
    Fixed ret;
    ret.setRawBits(this->getRawBits() - f.getRawBits());
    return (ret);
}

Fixed Fixed::operator*(const Fixed &f) const{
    Fixed ret;
    long long mul = static_cast<long long>(getRawBits()) * static_cast<long long>(f.getRawBits());
    ret.setRawBits(static_cast<int>(mul >> fraction));
    return (ret);
}

Fixed Fixed::operator/(const Fixed &f) const{
    Fixed ret;
    long long div = static_cast<long long>(getRawBits()) << fraction;
    ret.setRawBits(static_cast<int>(div / f.getRawBits()));
    return (ret);
}

Fixed& Fixed::operator--(void) {
    this->integer -= 1;
    return *this;
}

Fixed& Fixed::operator++(void) {
    this->integer += 1;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp = *this;
    this->integer -= 1;
    return tmp;
}

Fixed Fixed::operator++(int) {
    Fixed tmp = *this;
    this->integer += 1;
    return tmp;
}

bool Fixed::operator<=(Fixed const &f) const {
    return (this->integer <= f.integer);
}

bool Fixed::operator<(Fixed const &f) const {
    return (this->integer < f.integer);
}

bool Fixed::operator>=(Fixed const &f) const {
    return (this->integer >= f.integer);
}

bool Fixed::operator>(Fixed const &f) const {
    return (this->integer > f.integer);
}

bool Fixed::operator!=(Fixed const &f) const {
    return (this->integer != f.integer);
}

bool Fixed::operator==(Fixed const &f) const {
    return (this->integer == f.integer);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2) {
    if (f1 > f2) return (f1); return (f2);
}

Fixed &Fixed::max(Fixed const &f1, Fixed const &f2) {
    return (max(const_cast<Fixed &>(f1), const_cast<Fixed &>(f2)));
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2) {
    if (f1 > f2) return (f2); return (f1);
}

Fixed &Fixed::min(Fixed const &f1, Fixed const &f2) {
    return (min(const_cast<Fixed &>(f1), const_cast<Fixed &>(f2)));
}
