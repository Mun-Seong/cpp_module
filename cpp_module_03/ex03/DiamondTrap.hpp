#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap :  public FragTrap ,public ScavTrap
{
private:
    std::string name;
public:
    DiamondTrap();
	DiamondTrap(std::string name);
	~DiamondTrap();
    DiamondTrap(DiamondTrap const &copy);
    DiamondTrap & operator=(DiamondTrap const &copy);

    void whoAmI();
    void attack(const std::string &target);
};

#endif // DIAMONDTRAP_HPP
