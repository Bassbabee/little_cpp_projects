#include <iostream>
#include <string>
#include <new>

int main(){


	int numberOfStrings{  };
	std::string * p;
	std::cin >> numberOfStrings;
	p = new std::string[numberOfStrings];



	for (int i{ 0 }; i < numberOfStrings; i++){
    	std::cin >> p[i];
	}

	for (int i{ 0 }; i < numberOfStrings; i++){
		if (p[i].length() > 10){
			std::cout << p[i][0] << (p[i].length() - 2) << p[i][p[i].length() - 1] << '\n';
		} else {
			std::cout << p[i] << '\n';
		}
	}


	return 0;
}
