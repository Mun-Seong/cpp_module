/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:17:37 by museo             #+#    #+#             */
/*   Updated: 2022/11/02 20:40:32 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

class Bureaucrat;
# include "Bureaucrat.hpp"

class Form
{
private:
	const std::string name;
	bool is_signed;
	const int sign_grade;
	const int exe_grade;
	Form();
public:
	Form(const std::string name, const int sign_grade, const int exe_grade);
	Form(const Form &copy);
	Form &operator=(const Form &copy);
	~Form();
	void beSigned(const Bureaucrat &b);

	class GradeTooHighExecption : public std::exception
	{
		virtual const char* what() const throw();
	};
	class GradeTooLowExecption : public std::exception
	{
		virtual const char* what() const throw();
	};

	std::string getName() const;
	int getSignGrade() const;
	int getExeGrade() const;
	bool getIsSigned() const;
};
std::ostream& operator<<(std::ostream &out, const Form &f);

#endif
