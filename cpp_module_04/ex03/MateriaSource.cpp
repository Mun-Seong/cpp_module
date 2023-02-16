/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:56:02 by museo             #+#    #+#             */
/*   Updated: 2022/11/02 16:10:50 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	this->idx = 0;
	for (int i=0;i<4;i++)
		this->maters[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	this->idx = copy.idx;
	for(int i=0;i<idx;i++)
		this->maters[i] = copy.maters[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource &copy) {
	if (this != &copy)
	{
		this->idx = copy.idx;
		for(int i=0;i<this->idx;i++)
			this->maters[i] = copy.maters[i];
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i=0;i<4;i++)
	{
		if (this->maters[i])
		{
			delete(this->maters[i]);
			this->maters[i] = nullptr;
		}
	}
}

void MateriaSource::learnMateria(AMateria* to_learn) {
	if (to_learn && idx < 4)
	{
		maters[idx] = to_learn;
		std::cout << "	Materia Source [" << idx << "] = " << to_learn->getType() << std::endl; 
		idx++;
		return ;
	}
	std::cout << "	Materia Source can't learn any more." << std::endl;
	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i=0;i<idx;i++)
	{
		if (maters[i]->getType() == type)
		{
			std::cout << "	Materia Source [" << i << "] = "
				<< maters[i]->getType() << " is created!!!!!" << std::endl;
			return (maters[i]->clone());
		}
	}
	std::cout << "	" << type << " does not exist in Materia Source." << std::endl;
	return (nullptr);
}
