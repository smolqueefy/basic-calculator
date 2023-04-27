#include <iostream>


int main()
{
	double no1;
	double no2;
	double result;
	char op; // operator


	std::cout << "-------Calculator-------\n";
	std::cout << "Enter 1#: ";
	std::cin >> no1;
	std::cout << "Choose the operator either + / * - ^: ";
	std::cin >> op;
	std::cout << "Enter 2#: ";
	std::cin >> no2;


	switch (op)
	{

	case '+':
		result = no1 + no2;
		std::cout << "= " << result << '\n';
	    system("pause");
		system("cls");
		main();
		break;

	case '-':
		result = no1 - no2;
		std::cout << "= " << result << '\n';
		system("pause");
		system("cls");
		main();
		break;

	case '*':
		result = no1 * no2;
		std::cout << "= " << result << '\n';
		system("pause");
		system("cls");
		main();
		break;

	case '/':
		result = no1 / no2;
		std::cout << "= " << result << '\n';
		system("pause");
		system("cls");
		main();
		break;

	case '^':
		result = pow(no1, no2);
		std::cout << "= " << result << '\n';
		system("pause");
		system("cls");
		main();
		break;



	}















}