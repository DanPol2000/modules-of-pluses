#include "convert.hpp"

int main(int ac, char **av) {
    if (ac != 2)
    {
        std::cerr << "You should write down only ONE argument" << std::endl;
        return 1;
    }
    std::string s(av[1]);
    if (s[0] == '+' && s.length() > 1)
        s = &s[1];
    if (checker(s))
		printConvers(s);
	else
		std::cout << "Could not be translated into any format" << std::endl;
}