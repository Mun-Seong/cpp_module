#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->attackDamage = 30;
    this->hitPoint = 100;
    this->energyPoint = 100;
    std::cout << "+-+FrapTrap constructer called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap::ClapTrap(name)
{
    this->attackDamage = 30;
    this->hitPoint = 100;
    this->energyPoint = 100;
    std::cout << "+-+FragTrap \"" << this->name 
        <<"\" Boom his head falls. Birth of a new champion\" +=+" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy)
{
    std::cout << "+-+FragTrap copy constructor called" << std::endl;
    *this = copy;
}

FragTrap &FragTrap::operator=(FragTrap const &copy) {
    std::cout << "+-+FragTrap copy assignment called" << std::endl;
    if (this == &copy)
		return *this;
    this->name = copy.name;
    this->attackDamage = copy.attackDamage;
    this->energyPoint = copy.energyPoint;
    this->hitPoint = copy.hitPoint;
    return *this;
}

FragTrap::~FragTrap()
{
     std::cout << "+-+FragTrap \"" << this->name 
    <<"\" Destructor called +=+" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "+-+FragTrap \"" << this->name 
    <<" requestes positive high-five (((((((((((((((" << std::endl;
    return ;
}
