#include <iostream>
int main()
{
	int a, b;
	std::cin >> a >> b;
	std::cout << "Sum: " << a+b << "\n";
	std::cout << "Sub: " << a - b << "\n";
	std::cout << "Mul: " << a * b << "\n";
	if(b!=0)
	{
		std::cout << "Div: " << a / b << "\n";
	}
	else
	{
		std::cout << "Error\n";
	}
	return 0;
}
