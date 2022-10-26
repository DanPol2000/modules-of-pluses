#include "Bureaucrat.hpp"

int main()
{
	try 
	{
		std::cout << std::endl;
		std::cout << "\e[0;36m";
		Bureaucrat newOne;
		std::cout << newOne << std::endl;
		newOne.decrGrade();
		std::cout << newOne << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try 
	{
		std::cout << std::endl;
		std::cout << "\e[0;34m";
		Bureaucrat chip("Chip", 1);
		std::cout << chip << std::endl;
		chip.incrGrade();
		std::cout << chip << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "\e[0;32m";
		Bureaucrat ash("Ash", 151);
		std::cout << ash << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "\e[0;31m";
		Bureaucrat nico("Nico", 145);
		std::cout << nico << std::endl;
		nico.incrGrade();
		std::cout << nico << std::endl;
		nico.decrGrade(10);
		std::cout << nico << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
