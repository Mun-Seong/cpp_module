/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:17:31 by museo             #+#    #+#             */
/*   Updated: 2022/10/19 00:17:32 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std:: endl;
    std::cout << "I just love it!" << std::endl;
    return ;
}

void Harl::info( void ) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout <<  "I cannot believe adding extra bacon cost more money." << std::endl;
    std::cout << "You don’t put enough!" << std::endl;
    std::cout << "If you did I would not have to ask for it!" << std::endl;
    return ;
}

void Harl::warning( void ) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout <<  "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
    return ;
}

void Harl::error( void ) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout <<  "This is unacceptable, I want to speak to the manager now." << std::endl;
    return ;
}

void Harl::complain( std::string level ) {
    void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info,
        &Harl::warning, &Harl::error};
    std::string comp[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    std::string *pos = find(comp, comp + 4, level);
    switch (pos - comp)
    {
    case 0:
        (this->*f[0])();
        std::cout << std::endl;
    case 1:
        (this->*f[1])();
        std::cout << std::endl;
    case 2:
        (this->*f[2])();
        std::cout << std::endl;
    case 3:
        (this->*f[3])();
        std::cout << std::endl;
        break ;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }

}
