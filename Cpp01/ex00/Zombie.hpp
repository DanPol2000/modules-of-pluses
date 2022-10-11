#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie {

public:
	Zombie(std::string const & new_name);
	Zombie(Zombie const & zombie);
	virtual ~Zombie();
	Zombie &	operator=(Zombie const & zombie);
	void	announce();

private:
	std::string	name;

	Zombie();

};


#endif