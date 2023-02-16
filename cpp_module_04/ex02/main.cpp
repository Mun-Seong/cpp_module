/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:55:16 by museo             #+#    #+#             */
/*   Updated: 2022/11/02 16:12:05 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <cstdlib>

int main()
{
	//AAnimal ani; //is not allowed

	AAnimal *arr[10];

	for (int i=0;i<5;i++)
		arr[i] = new Dog();
	for (int i=5;i<10;i++)
		arr[i] = new Cat();
	
	for (int i = 0; i < 10; i++)
	{
		std::cout << i+1 << " : " << arr[i]->getType() << " make sound = ";
		arr[i]->makeSound();
		std::cout << std::endl;
	}
	for (int i = 9; i >= 0; i--)
		delete(arr[i]);
	
	Cat *c1 = new Cat();
	Cat *c2 = new Cat();

	c1->getB()->setIdeas("Cat", 0);
	c1->getB()->setIdeas("is", 1);
	c1->getB()->setIdeas("Cute", 2);

	*c2 = *c1;
	c2->getB()->setIdeas("Lovely", 2);
	for (int i = 0;i<3;i++)
		std::cout << c1->getB()->getIdeas(i) << " ";
		
	std::cout << std::endl;

	for (int i = 0;i<3;i++)
		std::cout << c2->getB()->getIdeas(i) << " ";

	std::cout << std::endl;

	/** No destructor = leaks */
	delete(c1);
	delete(c2);
	std::cout << "Cat's Destructor called" << std::endl;	
	
	system("leaks abstractclass");

	return 0;
}
