#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int ac, char **av) {
 if (ac != 4) {
		std::cerr << "3 arguments expected" << std::endl;
		return 1;
	}

	std::string		filename = std::string(av[1]);
	std::string		s1 = std::string(av[2]);
	std::string		s2 = std::string(av[3]);
  string line;

	ifstream	myfile(filename);
  if (!myfile.good()) {
		std::cerr << "file does not exist or read permission not set" << std::endl;
		return 2;
	}
  if (myfile.is_open())
  {
    ofstream	outfile(filename + ".replace");
    size_t i = 0;
    while (std::getline(myfile, line))
    {
      while (1)
      {
        i = line.find(s1);
        if (i == std::string::npos)
        {
          outfile << line;
          break;
        }
        else {
          outfile << line.substr(0, i) << s2;
          line = line.substr(i + s1.size());
          }
		}
    outfile << std::endl;
	}
    myfile.close();
    outfile.close();
  } 

  else cout << "Unable to open file"; 

  return 0;

}
