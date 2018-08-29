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

	std::cout << "Zadejte dve cisla:\n";
	std::cin >> x >> y;
	if (answer == '+')
	{
		std::cout << "Vysledek = " << x + y << '\n';
	}
	else if (answer == '-')
	{
		std::cout << "Vysledek = " << x - y << '\n';
	}
	else if (answer == '*')
	{
		std::cout << "Vysledek = " << x * y << '\n';
	}
	else if (answer == '/')
	{
		if (y == 0)
		{

			std::cout << "ERROR: Nelze delit nulou!\n";
		}
		else
		{
			std::cout << "Vysledek = " << x / y << '\n';
		}
	}
	else
	{
		std::cout << "ERROR: Zadejte platnou operaci\n";
	}

	
	system("PAUSE"); // windows only
	return 0;
}
