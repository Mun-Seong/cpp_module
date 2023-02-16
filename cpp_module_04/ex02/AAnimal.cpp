/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:54:50 by museo             #+#    #+#             */
/*   Updated: 2022/11/02 13:29:21 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	//std::cout << "AAnimal Constructor called" << std::endl;
}
AAnimal::AAnimal(const AAnimal &copy)
{
	//std::cout << "AAnimal Copy constructor called" << std::endl;
	this->type = copy.type;
}
AAnimal& AAnimal::operator=(const AAnimal &copy)
{
	//std::cout << "AAnimal Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->type = copy.type;

	return *this;
}
AAnimal::~AAnimal() {
	//std::cout << "AAnimal Destructor called" << std::endl;
}

std::string AAnimal::getType() const { return type; }
void AAnimal::setType(const std::string &type) { this->type = type; }
