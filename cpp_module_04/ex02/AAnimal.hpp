/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:54:52 by museo             #+#    #+#             */
/*   Updated: 2022/10/23 18:56:11 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class AAnimal
{
protected:
	std::string type;
public:
	AAnimal();
	AAnimal(const AAnimal &copy);
	AAnimal& operator=(const AAnimal &copy);
	virtual ~AAnimal();

	std::string getType() const;
	void setType(const std::string &type);
	virtual void makeSound(void) const = 0;
};


#endif // AANIAML_HPP
