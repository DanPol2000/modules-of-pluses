#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
using namespace std;

class Fixed {

private:

    int fixed_point;
    const int frac_bits = 8;

public:

    Fixed();
    Fixed(const Fixed &copy);
    ~Fixed();

    Fixed &operator=(const Fixed &copy);
    int getRawbits(void) const;
    void setRawBits(int const raw);
};

#endif 