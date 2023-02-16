/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:53:46 by museo             #+#    #+#             */
/*   Updated: 2022/11/02 16:13:36 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog Constructor called" << std::endl;
	this->type = "Dog";
}
Dog::Dog(const Dog &copy) {
	std::cout << "Dog Copy constructor called" << std::endl;
	this->type = copy.type;
}
Dog& Dog::operator=(const Dog &copy)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return *this;
}
Dog::~Dog() { std::cout << "Dog Destructor called" << std::endl; }

void Dog::makeSound(void) const
{ 
	std::cout << "Bark~~~!!!" << std::endl;
}
