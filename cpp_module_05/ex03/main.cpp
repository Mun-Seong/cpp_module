/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:44:16 by museo             #+#    #+#             */
/*   Updated: 2022/11/03 16:07:58 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <cstdlib>

int main()
{
	std::cout << "\n--------------------------------------------\n" << std::endl;
	/** Intern mistake */
	Form *scf, *rrf, *ppf, *erf;
	try {
		Intern someRandomIntern;
		erf = someRandomIntern.makeForm("", "Bender");
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n--------------------------------------------\n" << std::endl;
	try {
		Bureaucrat CanExec("James" ,10);
		Bureaucrat Signer("Signer", 10);
		std::cout << CanExec;
		Intern someRandomIntern;
		scf = someRandomIntern.makeForm("shrubbery creation", "home");
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		ppf = someRandomIntern.makeForm("presidential pardon", "crinimal");
		erf = NULL;
		
		if (scf)
			Signer.signForm(*scf);
		if (rrf)
			Signer.signForm(*rrf);
		if (ppf)
			Signer.signForm(*ppf);
		
		if (scf)
			CanExec.excuteForm(*scf);
		if (rrf)
			CanExec.excuteForm(*rrf);
		if (ppf)
			CanExec.excuteForm(*ppf);	
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n--------------------------------------------\n" << std::endl;
	delete(scf);
	delete(rrf);
	delete(ppf);
	delete(erf);
	
	system("leaks ex03");
}
