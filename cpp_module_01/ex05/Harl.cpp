/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:17:15 by museo             #+#    #+#             */
/*   Updated: 2022/10/27 14:26:45 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ) {
    std::cout <<  "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
    return ;
}

void Harl::info( void ) {
    std::cout <<  "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
    return ;
}

void Harl::warning( void ) {
    std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month" << std::endl;
    return ;
}

void Harl::error( void ) {
    std::cout <<  "This is unacceptable, I want to speak to the manager now." << std::endl;
    return ;
}

void Harl::complain( std::string level ) {
    void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info,
        &Harl::warning, &Harl::error};
    std::string comp[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    std::string *pos = find(comp, comp + 4, level);
   switch ((pos - comp) )
    {
    case 0 ... 3:
        (this->*f[pos - comp])();
        std::cout << std::endl;
        break;
    default:
        std::cout << "Error : NO " << level << std::endl;
        std::cout << std::endl;
    }
}
