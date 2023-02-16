/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:16:44 by museo             #+#    #+#             */
/*   Updated: 2022/10/27 14:17:07 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) {
    this->name = name;
    this->wp = nullptr;
}

HumanB::HumanB(const std::string &name, Weapon &wp)
{
    this->name = name;
    this->wp = &wp;
}

HumanB::HumanB() { }

HumanB::~HumanB() { }

void HumanB::setWeapon(Weapon &wp) {
    this->wp = &wp;
}

void HumanB::attack() {
    if (this->wp != nullptr)
        std::cout << this->name << " attacks with their "
            << this->wp->getType() << std::endl;
    else
        std::cout << this->name << " has no Weapon" << std::endl;
}
