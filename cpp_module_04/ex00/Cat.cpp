/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:53:41 by museo             #+#    #+#             */
/*   Updated: 2022/11/02 16:13:32 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Constructor called" << std::endl;
	this->type = "Cat";
}
Cat::Cat(const Cat &copy) {
	std::cout << "Cat Copy constructor called" << std::endl;
	this->type = copy.type;
}
Cat& Cat::operator=(const Cat &copy)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return *this;
}
Cat::~Cat() { std::cout << "Cat Destructor called" << std::endl; }

void Cat::makeSound(void) const
{ 
	std::cout << "Mew~~~!!!" << std::endl;
}
