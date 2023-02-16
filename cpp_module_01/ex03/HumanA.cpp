/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:16:40 by museo             #+#    #+#             */
/*   Updated: 2022/10/27 14:15:31 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &wp) {
    this->name = name;
    this->wp = &wp;
}

HumanA::HumanA() { }

void HumanA::attack() {
    if (this->wp != nullptr)
        std::cout << this->name << " attacks with their "
            << this->wp->getType() << std::endl;
}

HumanA::~HumanA() { }
