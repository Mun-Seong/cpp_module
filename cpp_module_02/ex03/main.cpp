/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:11:43 by museo             #+#    #+#             */
/*   Updated: 2022/11/01 14:46:57 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {
    Point a(1, 0);
    Point b(0, 0);
    Point c(0, 1);
    
    Point p1(1, 1);
    Point p2(0.4, 0.5);
    
    if (bsp(a, b, c, p1))
        std::cout << "p1 is inside traiangle" << std::endl;
    else
        std::cout << "p1 is outside traiangle" << std::endl;

    if (bsp(a, b, c, p2))
        std::cout << "p2 is inside traiangle" << std::endl;
    else
        std::cout << "p2 is outside traiangle" << std::endl;
    
    return 0;
}