#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
	: Form("RobotomyRequestForm", 72, 45)
{ this->target = target; }

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
	: Form("RobotomyRequestForm", 72, 45)
{ this->target = copy.target; }

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
	if (this != &copy)
		this->target = copy.target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() { }

std::string RobotomyRequestForm::getTarget() const { return target; }

void RobotomyRequestForm::action() const{
	std::cout << "Drill----------------- " << std::endl;
	
	srand(static_cast<unsigned int>(time(NULL)));
	int num = rand();
	if (num % 2)
		std::cout << target << " has become a robot."<< std::endl;
	else
		std::cout << "Robotization of " << target << " failed." << std::endl;
}
