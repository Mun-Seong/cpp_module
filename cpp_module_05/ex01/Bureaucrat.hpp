/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:17:34 by museo             #+#    #+#             */
/*   Updated: 2022/10/27 16:35:10 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Form;

# include <iostream>
# include <string>
# include "Form.hpp"

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
	Bureaucrat();
public:
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat& operator=(const Bureaucrat &copy);
	~Bureaucrat();

	std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(Form &f);
	class GradeTooHighExecption : public std::exception
	{
		virtual const char* what() const throw();
	};
	class GradeTooLowExecption : public std::exception
	{
		virtual const char* what() const throw();
	};
};
std::ostream& operator<<(std::ostream &out, const Bureaucrat &b);

#endif // BUREAUCRAT_HPP
