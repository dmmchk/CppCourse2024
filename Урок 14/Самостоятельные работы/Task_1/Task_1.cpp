#include <iostream>

int main()
{
	std::string a = "agaga";

	a.erase(std::remove(a.begin(), a.end(), 'a'), a.end());

	std::cout << a << '\n';
}