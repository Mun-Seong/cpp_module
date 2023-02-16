#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->name = "";
    this->attackDamage = 20;
    this->hitPoint = 100;
    this->energyPoint = 50;
    std::cout << "-ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name)
{
    this->attackDamage = 20;
    this->hitPoint = 100;
    this->energyPoint = 50;
    std::cout << "-ScavTrap \"" << this->name << "\" Constructor called" << std::endl;
    return ;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
    std::cout << "-ScavTrap copy constructor called" << std::endl;
    *this = copy;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &copy)
{
     std::cout << "-ScavTrap copy assignment opreater called" << std::endl;
     if (this == &copy)
		return *this;
     this->name = copy.name;
     this->attackDamage = copy.attackDamage;
     this->energyPoint = copy.energyPoint;
     this->hitPoint = copy.hitPoint;
     return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "-ScavTrap \"" << this->name << "\" Destructor called" << std::endl;
    return ;
}

void ScavTrap::attack(const std::string &target) {
    this->energyPoint--;
	std::cout << "-ScavTrap \"" << this->name  <<"\" attacks \"" 
        << target <<"\", causing \"" << this->attackDamage 
        << "\" points of damage!" << std::endl;
    return ;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap \"" << this->name 
    <<"\" am now in \"GATE KEEPWER MODE [[]]\"" << std::endl;
    return ;
}
