/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:11:40 by museo             #+#    #+#             */
/*   Updated: 2022/10/29 12:36:11 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
    int integer;
    static const int fraction;
public:
    Fixed();
    ~Fixed();
    Fixed(const int iv);
    Fixed(const float fv);
    Fixed(const Fixed &f);
    Fixed& operator=(const Fixed &f);

    Fixed operator+(const Fixed &f) const;
    Fixed operator-(const Fixed &f) const;
    Fixed operator*(const Fixed &f) const;
    Fixed operator/(const Fixed &f) const;

    bool operator>(const Fixed &f) const;
    bool operator<(const Fixed &f) const;
    bool operator>=(const Fixed &f) const;
    bool operator<=(const Fixed &f) const;
    bool operator==(const Fixed &f) const;
    bool operator!=(const Fixed &f) const;

    Fixed& operator++(void);
    Fixed& operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);

    static Fixed &max(Fixed const &f1, Fixed const &f2);
    static Fixed &max(Fixed &f1, Fixed &f2);
    static Fixed &min(Fixed const &f1, Fixed const &f2);
    static Fixed &min(Fixed &f1, Fixed &f2);

    int getRawBits( void ) const;
    void setRawBits(int const raw);

    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream& operator<<(std::ostream &ost, Fixed const &f);
#endif