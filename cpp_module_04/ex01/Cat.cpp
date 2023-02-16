/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:54:19 by museo             #+#    #+#             */
/*   Updated: 2022/11/02 13:20:30 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	//std::cout << "Cat Constructor called" << std::endl;
	this->type = "Cat";
	this->b = new Brain();
}
Cat::Cat(const Cat &copy) {
	//std::cout << "Cat Copy constructor called" << std::endl;
	this->type = copy.type;
	this->b = new Brain(*(copy.b));
}
Cat& Cat::operator=(const Cat &copy)
{
	//std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		delete (this->b);
		this->type = copy.type;
		this->b = new Brain(*(copy.b));
	}
	return *this;
}
Cat::~Cat() {
	//std::cout << "Cat Destructor called" << std::endl;
	delete (b);
}

void Cat::makeSound(void) const
{ 
	std::cout << "Mew~~~!!!" << std::endl;
}
Brain *Cat::getB() const { return b; }

void Cat::setB(Brain *b) { this->b = b; }
