#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "<>DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap::ClapTrap(name + "_clap_name")
{
    this->name = name;
    this->attackDamage = 30;
    this->hitPoint = 100;
    this->energyPoint = 50;

    std::cout << "<>DiamondTrap \"" << this->name 
    <<"\"constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy)
{
    std::cout << "<>DiamondTrap copy constructor called" << std::endl;
    *this = copy;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const &copy) {
    std::cout << "<>DiamondTrap copy assignment called" << std::endl;
     if (this == &copy)
		return *this;
     this->name = copy.name;
     ClapTrap::name = name + "_clap_name";
     this->attackDamage = copy.attackDamage;
     this->energyPoint = copy.energyPoint;
     this->hitPoint = copy.hitPoint;
     return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "<>DiamondTrap \"" << this->name << "\" Destructor called" << std::endl;
    return;
}

void DiamondTrap::whoAmI() {
    std::cout << "Parent Name : " << ClapTrap::name << std::endl;
    std::cout << "Child Name : " << this->name << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
    return ;
}
