#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int fixed_int_value;
		static const int frac_bits = 8;

	public:
		Fixed();
		Fixed(const int value);		//Конструктор, принимающий INT
		Fixed(const float value);	//Конструктор, принимающий FLOAT
		Fixed(const Fixed &copy);
		~Fixed();

		Fixed &operator=(const Fixed &copy);

		void setRawBits(int const raw);
		int getRawBits(void) const;

		float toFloat(void) const;	//Метод преобразует хранимое значение в FLOAT
		int toInt(void) const;		//Метод преобразует хранимое значение в Int
};

//Перегрузка оператора вставки хранимого значения в выходной поток
std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif
