/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:53:57 by museo             #+#    #+#             */
/*   Updated: 2022/10/23 18:56:11 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() { std::cout << "Constructor called" << std::endl; }
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->type = copy.type;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return *this;
}
WrongAnimal::~WrongAnimal() { std::cout << "Destructor called" << std::endl; }

std::string WrongAnimal::getType() const { return type; }
void WrongAnimal::setType(const std::string &type) { this->type = type; }

void WrongAnimal::makeSound(void) const { std::cout << "Wrong Animal Sound~~~" << std::endl; }
