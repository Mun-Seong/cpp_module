/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:55:08 by museo             #+#    #+#             */
/*   Updated: 2022/11/02 16:11:25 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"

class Cat : public AAnimal
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
