/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:16:53 by museo             #+#    #+#             */
/*   Updated: 2022/10/27 14:16:31 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) {   
    setType(type);
}

Weapon::Weapon() : type("") { }

std::string Weapon::getType() const { return this->type; }
void Weapon::setType(const std::string &type) { this->type = type; }

Weapon::~Weapon() { }
