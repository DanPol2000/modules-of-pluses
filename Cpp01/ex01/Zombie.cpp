
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( void )
{
}

Zombie::~Zombie( void )
{
	std::cout << name << " is dead" << std::endl;
}

Zombie	*zombieHorde( int numberOfZombies, std::string name )
{
	Zombie	*zombieHorde = new Zombie[numberOfZombies];
	
	for (int i = 0; i < numberOfZombies; i++)
		zombieHorde[i].setName(name);
	return (zombieHorde);
}

void	announceZombieHorde( int n, Zombie *zombieHorde )
{
	for (int i = 0; i < n; i++)
	{
		zombieHorde[i].announce();
	}
}

std::string	Zombie::getName( void )
{
	return (this->name);
}

void	Zombie::announce( void )
{
	std::cout << Zombie::getName() << ":";
	std::cout << " Braaaaaiiiiiiinnnnssss......." << std::endl;
}

void Zombie::setName( std::string name )
{
	this->name = name;
    cout << name << " is ALIVE" << endl;
}