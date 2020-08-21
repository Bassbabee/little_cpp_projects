#include <iostream>

int main()
{
	int watermelon_kg{};
	std::cin >> watermelon_kg;
	if (((watermelon_kg - 2) % 2 == 0) && ((watermelon_kg - 2) != 0)){
		std::cout << "YES";
	} else {
		std::cout << "NO";
	}
	return 0;
}
