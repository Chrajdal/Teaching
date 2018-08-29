#include <iostream>

/*
Toto je viceradkovy komentar
*/



// Toto je jednoradkovy komentar

// + - * / 

// ==
// !=
// <
// >
// <=
// >=

int main(void)
{
	int x = 0;
	int y = 0;

	char answer;
	std::cout << "Zadejte operaci: (+ - * /)\n";
	std::cin >> answer;

	if (answer == '+')
	{
		std::cout << "Zadejte dve cisla:\n";
		std::cin >> x >> y;
		std::cout << "Vysledek = " << x + y << '\n';
	}
	else if (answer == '-')
	{
		std::cout << "Zadejte dve cisla:\n";
		std::cin >> x >> y;
		std::cout << "Vysledek = " << x - y << '\n';
	}
	else if (answer == '*')
	{
		std::cout << "Zadejte dve cisla:\n";
		std::cin >> x >> y;
		std::cout << "Vysledek = " << x * y << '\n';
	}
	else if (answer == '/')
	{
		std::cout << "Zadejte dve cisla:\n";
		std::cin >> x >> y;
		std::cout << "Vysledek = " << x / y << '\n';
	}
	else
	{
		std::cout << "ERROR" << '\n';
	}

	
	system("PAUSE"); // windows only
	return 0;
}
