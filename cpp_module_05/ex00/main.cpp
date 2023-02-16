/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:17:23 by museo             #+#    #+#             */
/*   Updated: 2022/11/02 20:40:20 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat b1("Except", 0);
		std::cout << b1;
	}
	catch (std::exception &e){
		std::cout << e.what() << std:: endl;
	}
	try {
		Bureaucrat b2("James" ,45);
		Bureaucrat b3(b2);
		std::cout << b2;
		b2.decrementGrade();
		std::cout << "b2 : " << b2;
		b3.incrementGrade();
		std::cout << "b3 : " << b3;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat b3("Low", 151);
		std::cout << b3;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}
