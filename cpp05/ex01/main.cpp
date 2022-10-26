#include "Bureaucrat.hpp"

int main()
{
	try {
		std::cout << std::endl;
		std::cout << "\e[0;36m";
		Form f1 = Form("", 10, 5);
	}
	catch (std::exception & e) 
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		std::cout << std::endl;
		std::cout << "\e[0;32m";
		Form f1 = Form("First", 1, 20);
		Bureaucrat b1 = Bureaucrat("Nick", 30);
		Bureaucrat b2 = Bureaucrat("Jack", 1);
		
		b1.signForm(f1);
		b2.signForm(f1);
	}
	catch (std::exception & e) 
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		std::cout << std::endl;
		std::cout << "\e[0;33m";
		Form f3;
		Bureaucrat p1 = Bureaucrat("Peter", 80);
		p1.signForm(f3);
		Form f2 = Form("Second", 0, 5);
	}
	catch (std::exception & e) 
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}
