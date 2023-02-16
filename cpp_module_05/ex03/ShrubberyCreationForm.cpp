#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
	: Form("ShrubberyCreationForm", 145, 137)
{ this->target = target; }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
	: Form("ShrubberyCreationForm", 145, 137)
{ this->target = copy.target; }

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
	if (this != &copy)
		this->target = copy.target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() { }

std::string ShrubberyCreationForm::getTarget() const { return target; }

const char *ShrubberyCreationForm::FileNotCreationExecption::what() const throw() { return "File creation failed. :(";}

void ShrubberyCreationForm::action() const{
	std::ofstream fout((this->target + "_shrubbery").c_str());
	if (fout.fail())
	{
		std::cerr << target << ": Create Fail" << std::endl;
		throw ShrubberyCreationForm::FileNotCreationExecption();
	}
	fout <<
		"      /\\      \n" <<
		"     /\\*\\     \n" <<
		"    /\\O\\*\\    \n" <<
		"   /*/\\/\\/\\   \n" <<
		"  /\\O\\/\\*\\/\\  \n" <<
		" /\\*\\/\\*\\/\\/\\ \n" <<
		"/\\O\\/\\/*/\\/O/\\ \n" <<
		"      ||      \n" <<
		"      ||      \n" <<
		"      ||      " << std::endl;
	fout.close();
}
