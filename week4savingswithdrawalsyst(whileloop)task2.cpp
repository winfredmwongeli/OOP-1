//CT101/G/26569/25
//KIOKO WINFRED MWONGELI

#include <iostream>
using namespace std;

int main()
{
	double balance;
	double withdrawalAmount;

	cout << "Enter your account balance: ";
	cin >> balance;

	while (balance > 0)
	{
		cout << "Enter amount to withdraw: ";
		cin >> withdrawalAmount;

		if (withdrawalAmount > balance)
		{
			cout << "Insufficient balance. Withdrawal stopped." << endl;
			break;
		}

		if (withdrawalAmount <= 0)
		{
			cout << "Enter a withdrawal amount greater than zero." << endl;
			continue;
		}

		balance = balance - withdrawalAmount;
		cout << "Remaining balance: " << balance << endl;
	}

	if (balance == 0)
	{
		cout << "Your balance is zero. Withdrawal stopped." << endl;
	}

	return 0;
}
