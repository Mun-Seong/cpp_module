/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:16:24 by museo             #+#    #+#             */
/*   Updated: 2022/10/25 19:20:52 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
private:
	std::string mName;
public:
    Zombie(std::string name);
    Zombie();
	~Zombie();

	void announce(void);
	std::string GetName() const;
	void SetName(const std::string &name);
};
Zombie* zombieHorde( int N, std::string name );

#endif