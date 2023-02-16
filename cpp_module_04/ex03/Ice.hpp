/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:55:50 by museo             #+#    #+#             */
/*   Updated: 2022/11/02 14:22:36 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Ice : public AMateria
{
private:
	Ice(std::string const & type);
public:
	Ice();
	Ice(const Ice &copy);
	Ice& operator=(const Ice &copy);
	~Ice();

	virtual Ice* clone() const;
	virtual void use(ICharacter& target);
};

#endif // ICE_HPP
