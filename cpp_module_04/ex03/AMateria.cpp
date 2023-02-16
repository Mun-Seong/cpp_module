/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:55:31 by museo             #+#    #+#             */
/*   Updated: 2022/11/02 13:33:59 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() { }

AMateria::AMateria(std::string const & type) { this->type = type; }

AMateria::AMateria(const AMateria &copy) { this->type = copy.type; }

AMateria& AMateria::operator=(const AMateria &copy) {
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

AMateria::~AMateria() { }

std::string const & AMateria::getType() const { return this->type; }

void AMateria::use(ICharacter&) { }
