/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:53:39 by museo             #+#    #+#             */
/*   Updated: 2022/11/02 16:13:30 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal &copy);
	Animal& operator=(const Animal &copy);
	virtual ~Animal();

	std::string getType() const;
	void setType(const std::string &type);
	virtual void makeSound(void) const;
};

#endif
