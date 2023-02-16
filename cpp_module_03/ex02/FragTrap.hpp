#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    FragTrap();
public:
    
	FragTrap(std::string name);
	~FragTrap();
    FragTrap(FragTrap const &copy);
    FragTrap &operator=(FragTrap const &copy);

    void highFivesGuys(void);
};


#endif // FRAGTRAP_HPP
