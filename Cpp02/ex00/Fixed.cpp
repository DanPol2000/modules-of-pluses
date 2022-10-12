#include "Fixed.hpp"


Fixed::Fixed() {
    cout << "Default constructor called" << endl;
    this->fixed_point = 0;
}

Fixed::Fixed(const Fixed &copy)
{
    cout << "Copy constructor called" << endl;
    this->fixed_point = copy.getRawbits();
}

Fixed::~Fixed() {
    cout << "Destructor called" << endl;
}

Fixed &Fixed::operator=(const Fixed &copy) {
    cout << "Copy assigment operator called" << endl;
    this->fixed_point = copy.getRawbits();
    return (*this);
}


void Fixed::setRawBits(int const raw) {
    cout << "setRawBits member function called" << endl;
    this->fixed_point = raw;
}

int Fixed::getRawbits(void) const {
    cout << "getRawBits member function called" << endl;
    return (this->fixed_point);
}

