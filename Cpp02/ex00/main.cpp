#include "Fixed.hpp"

int main() {
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;

    cout << a.getRawbits() << endl;
    cout << b.getRawbits() << endl;
    cout << c.getRawbits() << endl;

    return 0;
}

