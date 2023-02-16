/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:55:36 by museo             #+#    #+#             */
/*   Updated: 2022/11/02 14:53:37 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() { }

Character::Character(std::string name) { 
	this->idx = 0;
	this->name = name;
	for(int i=0;i<4;i++)
		this->inven[i] = nullptr;
	std::cout << "	Character : " << this->name << " !!!!!" << std::endl;
}

Character::Character(const Character &copy) {
	this->idx = copy.idx;
	this->name = copy.name;
	for(int i=0;i<copy.idx;i++)
		this->inven[i] = copy.inven[i]->clone();
	std::cout << "	Character(Copy) : " << this->name << " !!!!!" << std::endl;
}

Character& Character::operator=(const Character &copy) {
	if (this != &copy)
	{
		this->name = copy.name;
		this->idx = copy.idx;
		for(int i=0;i<4;i++)
		{	
			if (this->inven[i])
			{
				delete(this->inven[i]);
				this->inven[i] = nullptr;
			}
		}
		for(int i=0;i<copy.idx;i++)
			this->inven[i] = copy.inven[i]->clone();
	}
	std::cout << "	Character(Copy Oper) : " << this->name << " !!!!!" << std::endl;
	return (*this);
}

Character::~Character()
{
	for (int i=0;i<4;i++)
	{
		if (this->inven[i])
		{	
			delete(this->inven[i]);
			this->inven[i] = nullptr;
		}
	}
	std::cout << "	Character : " << this->name << " died...." << std::endl;
}

std::string const & Character::getName() const { return (this->name); }

void Character::equip(AMateria* m) {	
	if (m && idx < 4)
	{
		this->inven[idx] = m;
		std::cout << "	" << this->name << " Slot [" << idx << "] = " <<
			m->getType() << std::endl; 
		idx++;
		return ;
	}
	std::cout << "	This materia can't be mounted ;(" << std::endl;
	return ;
}

void Character::unequip(int idx) {
	if (0 <= idx && idx < 4 && this->inven[idx])
	{
		this->inven[idx] = nullptr;
		std::cout << "	" << this->name << " Slot [" << idx << "] is empty" << std::endl;
		return ;
	}
	std::cout << "	This index can't be unequiped ;(" << std::endl;
	return ;
}

void Character::use(int idx, ICharacter& target) {
	if (0 <= idx && idx < 4 && this->inven[idx])
	{
		this->inven[idx]->use(target);
		return ;
	}
	std::cout << "	This index is not available." << std::endl;
	return ;
}
