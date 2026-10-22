//CT/101/G/26569/25
//KIOKO WINFRED MWONGELI
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string customerName;
double unitsConsumed ,ratePerUnit;
double totalBill,discount,finalAmount;

void getCustomerDetails();
void calculateBill();
void applyDiscount();
void displayBill();

int main()
{
    getCustomerDetails();
    calculateBill();
    applyDiscount();
    displayBill();

    return 0;
}

void getCustomerDetails()
{
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter number of units consumed: ";
    cin >> unitsConsumed;

    cout << "Enter rate per unit: ";
    cin >> ratePerUnit;
}

void calculateBill()
{
    totalBill = unitsConsumed * ratePerUnit;
}

void applyDiscount()
{
    discount = 0;

    if (unitsConsumed > 100)
    {
        discount = totalBill * 0.10;
    }

    finalAmount = totalBill - discount;
}

void displayBill()
{
    cout << fixed << setprecision(2);
    cout << "\n-------- WATER BILL --------" << endl;
    cout << "Customer name: " << customerName << endl;
    cout << "Units consumed: " << unitsConsumed << endl;
    cout << "Rate per unit: " << ratePerUnit << endl;
    cout << "Total bill before discount: " << totalBill << endl;
    cout << "Discount: " << discount << endl;
    cout << "Final amount payable: " << finalAmount << endl;
}
