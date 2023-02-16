/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:16:20 by museo             #+#    #+#             */
/*   Updated: 2022/10/25 19:20:27 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
	: mName(name)
{
	return;
}

Zombie::Zombie(void) : mName("") { return ; }

std::string Zombie::GetName() const { return mName; }

void Zombie::SetName(const std::string &MName) { mName = MName; }

Zombie::~Zombie()
{
	std::cout << "Zombie " 
        << this->mName << " is gone. R.I.P :b" << std::endl;
    return ;
}

void Zombie::announce(void) {
	std::cout << this->mName << " BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}
