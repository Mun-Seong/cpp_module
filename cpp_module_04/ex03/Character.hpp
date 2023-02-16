/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:55:40 by museo             #+#    #+#             */
/*   Updated: 2022/11/02 13:37:55 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string	name;
	AMateria	*inven[4];
	int			idx;
	Character();
public:
	Character(std::string name);
	Character(const Character &copy);
	Character& operator=(const Character &copy);
	virtual ~Character();
	
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};


#endif // CHARACTER_HPP
