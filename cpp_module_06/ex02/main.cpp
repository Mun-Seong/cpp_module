/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:30:40 by museo             #+#    #+#             */
/*   Updated: 2022/11/05 13:38:55 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	/** rand init */
	srand(static_cast<unsigned int>(time(NULL)));

	int n = rand() % 3;
	Base *ret;
	switch (n)
	{
	case 0:
		std::cout << "Make A" << std::endl;
		ret = new A;
		break;
	case 1:
		std::cout << "Make B" << std::endl;
		ret = new B;
		break;
	case 2:
		std::cout << "Make C" << std::endl;
		ret = new C;
		break;
	default:
		std::cout << "??? we dont make anything ???" << std::endl;
		ret = NULL;
		break;
	}
	return (ret);
}

void identify(Base *p)
{
	std::cout << "Addr of Base's type is ";
	if (dynamic_cast<A *>(p))
		std::cout << "A";
	if (dynamic_cast<B *>(p))
		std::cout << "B";
	if (dynamic_cast<C *>(p))
		std::cout << "C";
	std::cout << std::endl;
}

void identify(Base &p)
{
	std::cout << "Ref of Base's type is ";
	try {
		A &t = dynamic_cast<A &>(p);
		std::cout << "A";
		t.~A();
	}
	catch (std::exception &e) { }

	try {
		B &t = dynamic_cast<B &>(p);
		std::cout << "B";
		t.~B();
	}
	catch (std::exception &e) { }

	try {
		C &t = dynamic_cast<C &>(p);
		std::cout << "C";
		t.~C();
	}
	catch (std::exception &e) { }
	std::cout << std::endl;
}

int main()
{
	try {
		Base *pBase = generate();
		Base *pB = new Base;
		identify(pBase);
		identify(pB);

		identify(*pBase);
		identify(*pB);

		delete (pBase);
		delete (pB);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	system("leaks identify");
}
