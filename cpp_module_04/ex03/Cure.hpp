/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:55:45 by museo             #+#    #+#             */
/*   Updated: 2022/11/02 14:22:54 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Cure : public AMateria
{
private:
	Cure(std::string const & type);	
public:
	Cure();
	Cure(const Cure &copy);
	Cure& operator=(const Cure &copy);
	~Cure();

	virtual Cure* clone() const;
	virtual void use(ICharacter& target);
};

#endif // CURE_HPP
