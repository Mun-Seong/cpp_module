/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:11:43 by museo             #+#    #+#             */
/*   Updated: 2022/11/01 15:12:30 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed aa(-2.75f);
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed const c(Fixed(2.25f) * Fixed(1.75f));

    std::cout << aa << std::endl;

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout.precision(10);
    std::cout << b << std::endl;

    std::cout << c << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;
    
    return 0;
}