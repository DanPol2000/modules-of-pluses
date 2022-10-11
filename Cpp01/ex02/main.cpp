#include <iostream>
using namespace std;

int main() {
    string str = "HI, THIS IS BRAIN";
    string *pstr = &str;
    string &ref = str;
    cout << "1)The memory address of the string variable: " << &str << endl;
    cout << "2)The memory address held by stringPTR: " << &(*pstr) << endl;
    cout << "3)The memory address held by stringREF: " << &ref << endl;
    cout << "-------------------------------------------" << endl;
    cout << "1)The value of the string variable: " << str << endl;
    cout << "2)The value pointed to by stringPTR: " << (*pstr) << endl;
    cout << "3)The value pointed to by stringREF: " << ref << endl;
}