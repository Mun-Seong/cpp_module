/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:11:23 by museo             #+#    #+#             */
/*   Updated: 2022/10/19 02:11:24 by museo            ###   ########.fr       */
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
    Fixed(const Fixed &f);
    Fixed& operator=(const Fixed &f);

    int getRawBits( void ) const;
    void setRawBits(int const raw);
};

#endif