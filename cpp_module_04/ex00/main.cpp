/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:53:51 by museo             #+#    #+#             */
/*   Updated: 2022/11/02 16:13:39 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <cstdlib>

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	j->makeSound();
	i->makeSound();
	meta->makeSound();

	delete(i);
	delete(j);
	delete (meta);

	std::cout << "-----------Wrong Animals!!!!" << std::endl;

	const WrongAnimal* w_meta = new WrongAnimal();
	const WrongAnimal* w_j = new WrongCat();

	std::cout << w_j->getType() << " " << std::endl;

	w_j->makeSound();
	w_meta->makeSound();
	 
	delete(w_j);
	delete (w_meta);
	system("leaks polymorphism");
	return 0;
}
