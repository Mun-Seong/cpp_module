#include "ClapTrap.hpp"

int main()
{
    ClapTrap c1("crap");

    c1.attack("Another");
    c1.takeDamage(5);
    c1.beRepaired(3);

    for (int i=0; i<10; i++)
    {
        c1.attack("A");
        std::cout << std::endl;
    }

    return (0);
}