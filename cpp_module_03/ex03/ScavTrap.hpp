#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
protected:
    ScavTrap();
public:
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(ScavTrap const &copy);
    ScavTrap &operator=(ScavTrap const &copy);

    void attack(const std::string &target);
    void guardGate();
};

#endif // SCAVTRAP_HPP
