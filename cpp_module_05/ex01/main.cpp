/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:44:20 by museo             #+#    #+#             */
/*   Updated: 2022/11/03 13:19:26 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	try {
		Bureaucrat b2("James" ,45);
		Bureaucrat b3("Kim", 1);
		Form f1("Form 1", 10, 5);
		std::cout << "Form : " << f1;
		std::cout << "b2 : " << b2;
		std::cout << "b3 : " << b3;
		b2.signForm(f1);
		b3.signForm(f1);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try {
		Form f2("Form 2", 0, 10);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
