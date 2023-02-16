/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:44:16 by museo             #+#    #+#             */
/*   Updated: 2022/11/03 13:19:08 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cstdlib>

int main()
{	
	std::cout << "\n--------------------------------------------\n" << std::endl;
	/** Form is not signed*/
	try {
		Bureaucrat CanNotExec("James" ,150);
		std::cout << CanNotExec;
		Form *SCF = new ShrubberyCreationForm("home");
		
		CanNotExec.excuteForm(*SCF);
		delete(SCF);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n--------------------------------------------\n" << std::endl;
	/** Not exec :Grade too low */
	try {
		Bureaucrat CanNotExec("James" ,150);
		Bureaucrat Signer("Signer", 10);
		std::cout << CanNotExec;
		Form *SCF = new ShrubberyCreationForm("home");
		
		Signer.signForm(*SCF);
		CanNotExec.excuteForm(*SCF);
		delete(SCF);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n--------------------------------------------\n" << std::endl;
	/** exec SCF */
	try {
		Bureaucrat CanExec("James" ,15);
		Bureaucrat Signer("Signer", 10);
		std::cout << CanExec;
		Form *SCF = new ShrubberyCreationForm("home");
		
		Signer.signForm(*SCF);
		CanExec.excuteForm(*SCF);
		delete(SCF);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n--------------------------------------------\n" << std::endl;
	/** exec RRF */
	try {
		Bureaucrat CanExec("James" ,15);
		Bureaucrat Signer("Signer", 10);
		std::cout << CanExec;
		Form *RRF = new RobotomyRequestForm("AA");
		Signer.signForm(*RRF);
		CanExec.excuteForm(*RRF);
		delete(RRF);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n--------------------------------------------\n" << std::endl;
	/** exec PPF */
	try {
		Bureaucrat CanExec("James" ,1);
		Bureaucrat Signer("Signer", 10);
		std::cout << CanExec;
		Form *PPF = new PresidentialPardonForm("criminal");
		Signer.signForm(*PPF);
		CanExec.excuteForm(*PPF);
		delete(PPF);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n--------------------------------------------" << std::endl;

	system("leaks ex02");
}
