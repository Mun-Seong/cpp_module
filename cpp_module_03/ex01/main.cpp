#include "ScavTrap.hpp"

int main()
{
    ScavTrap s1("scav"); 

    s1.attack("The Other");
    s1.takeDamage(30);
    s1.beRepaired(10);
    s1.guardGate();
    std::cout << std::endl;

    return (0);
}