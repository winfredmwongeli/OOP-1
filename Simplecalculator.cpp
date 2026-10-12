//CT101/26569/25
//KIOKO WINFRED MWONGELI
#include <iostream>
using namespace std;

int main()
{
	double number1;
	double number2;
	double result;
	char operation;

	cout << "Enter the first number: ";
	cin >> number1;

	cout << "Enter an operator (+, -, *, /): ";
	cin >> operation;

	cout << "Enter the second number: ";
	cin >> number2;

	switch (operation)
	{
	case '+':
		result = number1 + number2;
		break;
	case '-':
		result = number1 - number2;
		break;
	case '*':
		result = number1 * number2;
		break;
	case '/':
		if (number2 == 0)
		{
			cout << "Error: division by zero is not allowed." << endl;
			return 1;
		}
		result = number1 / number2;
		break;
	default:
		cout << "Error: invalid operator." << endl;
		return 1;
	}

	cout << "Result: " << number1 << " " << operation << " "
		 << number2 << " = " << result << endl;

	return 0;
}
