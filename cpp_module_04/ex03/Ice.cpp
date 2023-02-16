/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:55:48 by museo             #+#    #+#             */
/*   Updated: 2022/10/23 18:56:11 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() { this->type = "ice"; }

Ice::Ice(std::string const & type) { this->type = type; }

Ice::Ice(const Ice &copy) { this->type = copy.type; }

Ice& Ice::operator=(const Ice &copy) {
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

Ice::~Ice() { }

Ice* Ice::clone() const {
	Ice *ret = new Ice();
	ret->type = this->type;
	return (ret);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
