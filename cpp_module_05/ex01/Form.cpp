/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:44:23 by museo             #+#    #+#             */
/*   Updated: 2022/11/03 12:56:15 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, const int sign_grade, const int exe_grade)
	: name(name),
	  sign_grade(sign_grade),
	  exe_grade(exe_grade)
{
	if (sign_grade < 1 || exe_grade < 1)
		throw Form::GradeTooHighExecption();
	else if (sign_grade > 150 || exe_grade > 150)
		throw Form::GradeTooLowExecption();
	this->is_signed = false;
}

Form::Form(const Form &copy)
	: name(copy.name),
	  sign_grade(copy.sign_grade),
	  exe_grade(copy.exe_grade)
{
	if (sign_grade < 1 || exe_grade < 1)
		throw Form::GradeTooHighExecption();
	else if (sign_grade > 150 || exe_grade > 150)
		throw Form::GradeTooLowExecption();
	this->is_signed = copy.is_signed;
}

Form &Form::operator=(const Form &copy) {
	if (this != &copy)
		this->is_signed = copy.is_signed;
	return (*this);
}

Form::~Form() { }

void Form::beSigned(const Bureaucrat &b) {
	if (this->is_signed == false)
	{
		if (b.getGrade() <= this->sign_grade)
			this->is_signed = true;
		else
			throw Form::GradeTooLowExecption();
	}
	else
		std::cout << this->name << " form already signed." << std::endl;
}

const char *Form::GradeTooHighExecption::what() const throw() { return "Grade Too High :("; }
const char *Form::GradeTooLowExecption::what() const throw() { return "Grade Too Low :(";}

std::string Form::getName() const { return name; }
int Form::getSignGrade() const { return sign_grade; }
int Form::getExeGrade() const { return exe_grade; }
bool Form::getIsSigned() const { return is_signed; }

std::ostream& operator<<(std::ostream &out, const Form &f) {
	out << f.getName() << " Form, sign_grade : " << f.getSignGrade()
		<< ", exe_grade : " << f.getExeGrade() << "." << std::endl;
	return (out);
}
