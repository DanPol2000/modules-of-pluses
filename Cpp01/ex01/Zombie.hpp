#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
// # include <string>
#include <iostream>
using namespace std;

class Zombie {
public:
    Zombie();
    ~Zombie();

    void setName(std::string name);
    std::string	getName( void );
	void announce( void );

private:
    std::string name;
};

Zombie* zombieHorde( int N, std::string name );
void	announceZombieHorde( int n, Zombie *zombieHorde );

#endif
