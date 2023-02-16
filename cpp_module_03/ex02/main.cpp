#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap f1("Frag"); 

    f1.attack("Champion");
    f1.takeDamage(30);
    f1.beRepaired(10);
    f1.highFivesGuys();
    std::cout << std::endl;

    return (0);
}