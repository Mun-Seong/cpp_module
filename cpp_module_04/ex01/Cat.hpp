/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:54:23 by museo             #+#    #+#             */
/*   Updated: 2022/11/02 16:12:39 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
private:
	Brain *b;
public:
	Cat();
	Cat(const Cat &copy);
	Cat& operator=(const Cat &copy);
	~Cat();

	virtual void makeSound() const;
	Brain *getB() const;
	void setB(Brain *b);
};

#endif
