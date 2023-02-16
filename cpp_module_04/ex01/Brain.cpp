/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:54:14 by museo             #+#    #+#             */
/*   Updated: 2022/10/23 18:56:11 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() { std::cout << " Brain Constructor called" << std::endl; }
Brain::Brain(const Brain &copy)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	for (int i=0;i<100;i++)
		this->ideas[i] = copy.ideas[i];
}
Brain& Brain::operator=(const Brain &copy)
{
	std::cout << "Brain Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		for (int i=0;i<100;i++)
		this->ideas[i] = copy.ideas[i];
	}
	return *this;
}
Brain::~Brain() { std::cout << "Brain Destructor called" << std::endl; }

std::string Brain::getIdeas(int idx) const {
	return (ideas[idx]);
}

void Brain::setIdeas(const std::string &ideas, int idx) {
	(this->ideas)[idx] = ideas; 
}
