/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:54:55 by museo             #+#    #+#             */
/*   Updated: 2022/10/23 18:56:11 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal Constructor called" << std::endl;
}
Animal::Animal(const Animal &copy)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	this->type = copy.type;
}
Animal& Animal::operator=(const Animal &copy)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->type = copy.type;

	return *this;
}
Animal::~Animal() {
	std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType() const { return type; }
void Animal::setType(const std::string &type) { this->type = type; }

void Animal::makeSound(void) const { }
