/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:17:32 by museo             #+#    #+#             */
/*   Updated: 2022/10/27 16:36:26 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(149) { }

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name) {

	if (grade < 1)
		throw Bureaucrat::GradeTooHighExecption();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowExecption();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name) {
	if (copy.grade < 1)
		throw Bureaucrat::GradeTooHighExecption();
	else if (copy.grade > 150)
		throw Bureaucrat::GradeTooLowExecption();
	this->grade = copy.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy) {
	if (this != &copy)
		this->grade = copy.grade;
	return *this;
}

Bureaucrat::~Bureaucrat() { }

std::string Bureaucrat::getName() const { return name; }
int Bureaucrat::getGrade() const { return grade; }

void Bureaucrat::incrementGrade() {
	int temp = grade - 1;
	if (temp < 1)
		throw Bureaucrat::GradeTooHighExecption();
	this->grade = temp;
}

void Bureaucrat::decrementGrade() {
	int temp = grade + 1;
	if (temp > 150)
		throw Bureaucrat::GradeTooLowExecption();
	this->grade = temp;
}
const char *Bureaucrat::GradeTooHighExecption::what() const throw() { return "Grade Too High :("; }
const char *Bureaucrat::GradeTooLowExecption::what() const throw() { return "Grade Too Low :(";}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &b) {
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return out;
}

void Bureaucrat::signForm(Form &f) {
	try
	{
		f.beSigned(*this);
		std::cout << getName() << " signed " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << getName() << " couldn’t sign " << f.getName()
				<< " because ";
		std::cout << e.what() << std::endl;
	}
}
