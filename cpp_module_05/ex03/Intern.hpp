#ifndef INTERN_HPP
#define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &copy);
	Intern &operator=(const Intern &copy);
	~Intern();
	class FormIsEmptyExecption : public std::exception
	{
		virtual const char* what() const throw();
	};

	Form *makeForm(const std::string &typeForm, const std::string &param);
};

#endif
