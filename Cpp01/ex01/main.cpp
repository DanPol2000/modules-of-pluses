#include "Zombie.hpp"

int	main() {

	int n = 0;
    string name;
    cout << "Put the number of arguments: ";
	cin >> n;
	cout << "Welcome Zombie horde of " << n << endl;
    cin >> name;
    Zombie *zom = zombieHorde(n, name);

    announceZombieHorde(n, zom);
    delete [] zom;
}