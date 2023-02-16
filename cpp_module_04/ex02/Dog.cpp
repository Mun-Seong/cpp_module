/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:55:11 by museo             #+#    #+#             */
/*   Updated: 2022/11/02 13:29:53 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	//std::cout << "Dog Constructor called" << std::endl;
	this->type = "Dog";
	this->b = new Brain();
}
Dog::Dog(const Dog &copy) {
	//std::cout << "Dog Copy constructor called" << std::endl;
	this->type = copy.type;
	this->b = new Brain(*(copy.b));
}
Dog& Dog::operator=(const Dog &copy)
{
	//std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		delete this->b;
		this->type = copy.type;
		this->b = new Brain(*(copy.b));
	}
	return *this;
}
Dog::~Dog() {
	//std::cout << "Dog Destructor called" << std::endl;
	delete (b);
}

void Dog::makeSound(void) const
{ 
	std::cout << "Bark~~~!!!" << std::endl;
}
Brain *Dog::getB() const { return b; }

void Dog::setB(Brain *b) { this->b = b; }
