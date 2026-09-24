//CTIO1/G/26569/25
//KIOKO WINFRED MWONGELI
//MOBILE PHONE SALES RECEIPT SYSTEM

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string customerName;
	string phoneName;
	int quantity;
	double price;
	double amountPaid;

	cout << "MOBILE PHONE SALES RECEIPT SYSTEM" << endl;
	cout << "---------------------------------" << endl;

	cout << "Enter customer name: ";
	getline(cin, customerName);

	cout << "Enter phone name: ";
	getline(cin, phoneName);

	cout << "Enter phone price: ";
	cin >> price;

	cout << "Enter quantity: ";
	cin >> quantity;

	double total = price * quantity;

	cout << "Enter amount paid: ";
	cin >> amountPaid;

	cout << fixed << setprecision(2);
	cout << "\n=================================" << endl;
	cout << "          SALES RECEIPT" << endl;
	cout << "=================================" << endl;
	cout << "Customer: " << customerName << endl;
	cout << "Phone:    " << phoneName << endl;
	cout << "Price:    " << price << endl;
	cout << "Quantity:  " << quantity << endl;
	cout << "Total:    " << total << endl;
	cout << "Paid:     " << amountPaid << endl;
	cout << "Balance:  " << amountPaid - total << endl;

	return 0;
}

