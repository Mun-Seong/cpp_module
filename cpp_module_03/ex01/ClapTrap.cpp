#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->name = "";
    this->attackDamage = 0;
    this->hitPoint = 10;
    this->energyPoint = 10;
    std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
    this->attackDamage = 0;
    this->hitPoint = 10;
    this->energyPoint = 10;
    std::cout << "ClapTrap \"" << this->name 
        << "\" Constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
    std::cout << "ClapTrap \"" << this->name 
        << "\" Copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &copy)
{
     std::cout << "ClapTrap \"" << this->name 
        << "\" copy assignment operator operator called" << std::endl;
	if (this == &copy)
		return *this;
	this->name = copy.name;
	this->hitPoint = copy.hitPoint;
	this->energyPoint = copy.energyPoint;
	this->attackDamage = copy.attackDamage;
	
    return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap \"" << this->name << "\" Destructor called" << std::endl;
    return ;
}

void ClapTrap::attack(const std::string &target) {
    if (energyPoint == 0)
    {
        std::cout << "ClapTrap \"" << this->name  <<"\" has no energy" << std::endl;
        return ;
    }
    this->energyPoint--;
	std::cout << "ClapTrap \"" << this->name  <<"\" attacks \"" 
        << target <<"\", causing \"" << this->attackDamage 
        << "\" points of damage! \n(remaining hitpoint = " << hitPoint
        << ") (remaining energypoint = " << energyPoint << ")" << std::endl;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount) {
    this->hitPoint -= amount;
	std::cout << "ClapTrap \"" << this->name  <<"\" took \"" 
        << amount <<"\" points of damage! ;( (remaining hitpoint = " << hitPoint << ")" << std::endl;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoint == 0)
    {
        std::cout << "ClapTrap \"" << this->name  <<"\" has no energy" << std::endl;
        return ;
    }
    this->energyPoint--;
    this->hitPoint += amount;
	std::cout << "ClapTrap \"" << this->name  <<"\" repaired himself by \"" 
        << amount <<"\" points :) \n(remaining hitpoint = " << hitPoint
        << ") (remaining energypoint = " << energyPoint << ")" << std::endl;
    return ;
}