#include <iostream>

int main()
{
    char name[20]{ "Alex" }; // only use 5 characters (4 letters + null terminator)
	for (int i{ 4 }; i <= 30; ++i)
	{
		name[i] = 'f';
	}
    std::cout << "My name is: " << name << '\n';

    return 0;
}
