#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap d1("Dia");
    DiamondTrap d2 = d1;

    std::cout << std::endl;

    d1.attack("New Champion");
    d1.takeDamage(10);
    d1.beRepaired(5);
    d1.guardGate();
    d1.highFivesGuys();
    d1.whoAmI();
    d2.whoAmI();
    std::cout << std::endl;

    return (0);
}