#include "Intern.hpp"

Intern::Intern() { }

Intern::Intern(const Intern &copy) { *this = copy; }

Intern &Intern::operator=(const Intern &copy) {
	if (this != &copy) 
		return *this;
	return *this;
}

Intern::~Intern() { }

const char *Intern::FormIsEmptyExecption::what() const throw() { return "Form is empty :(";}

Form *Intern::makeForm(const std::string &typeForm, const std::string &param) {
	std::string arrForm[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i = 0;
	int size = sizeof(arrForm) / sizeof(arrForm[0]);
	Form *ret;

	while ((i < size) && (arrForm[i] != typeForm))
		i++;
	switch (i)
	{
	case 0:
		ret = new ShrubberyCreationForm(param);
		std::cout << "Intern make " << ret->getName() << std::endl;
		break;
	case 1:
		ret = new RobotomyRequestForm(param);
		std::cout << "Intern make " << ret->getName() << std::endl;
		break;
	case 2:
		ret = new PresidentialPardonForm(param);
		std::cout << "Intern make " << ret->getName() << std::endl;
		break;
	default:
		ret = nullptr;
		std::cout << "Intern can't make Form It's not in the specified format" << std::endl;
		throw Intern::FormIsEmptyExecption();
		break;
	}
	return (ret);
}
