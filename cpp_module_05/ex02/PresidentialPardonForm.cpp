#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
	: Form("PresidentialPardonForm", 25, 5)
{ this->target = target; }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
	: Form("PresidentialPardonForm", 25, 5)
{ this->target = copy.target; }

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {
	if (this != &copy)
		this->target = copy.target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PPF " << getName() << " is distructed" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const { return target; }

void PresidentialPardonForm::action() const{
	std::cout << "The president pardoned " << this->target << "." << std::endl;
}
