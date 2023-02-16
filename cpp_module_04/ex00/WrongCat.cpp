/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:54:02 by museo             #+#    #+#             */
/*   Updated: 2022/11/02 16:13:45 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat Constructor called" << std::endl;
	this->type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat &copy) {
	std::cout << "WrongCat Copy constructor called" << std::endl;
	this->type = copy.type;
}
WrongCat& WrongCat::operator=(const WrongCat &copy)
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return *this;
}
WrongCat::~WrongCat() { std::cout << "WrongCat Destructor called" << std::endl; }

void WrongCat::makeSound(void) const
{ 
	std::cout << "Wrong Cat Sound~~~" << std::endl;
}
