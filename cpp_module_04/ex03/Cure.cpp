/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:55:42 by museo             #+#    #+#             */
/*   Updated: 2022/10/23 18:56:11 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() { this->type = "cure"; }

Cure::Cure(std::string const & type) { this->type = type; }

Cure::Cure(const Cure &copy) { this->type = copy.type; }

Cure& Cure::operator=(const Cure &copy) {
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

Cure::~Cure() { }

Cure* Cure::clone() const {
	Cure *ret = new Cure();
	ret->type = this->type;
	return (ret);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}
