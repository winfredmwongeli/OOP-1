//CT/101/G/26569/25
//KIOKO WINFRED MWONGELI
#include <iostream>
#include <string>
using namespace std;

void getEmployeesDetails();
void calculateOvertimePay();
void calculateNetSalary();
void displayBill();

string employeeName;
double basicSalary, overtimeHours, ratePerHour;
double overtimePay, netSalary;

int main() {
    getEmployeesDetails();
    calculateOvertimePay();
    calculateNetSalary();
    displayBill();

    return 0;
}

void getEmployeesDetails() {
    cout << "enter employee name: ";
    getline(cin, employeeName);

    cout << "enter basic salary: ";
    cin >> basicSalary;

    cout << "enter overtime hours: ";
    cin >> overtimeHours;

    cout << "rate per hour: ";
    cin >> ratePerHour;
}

void calculateOvertimePay() {
    overtimePay = overtimeHours * ratePerHour;
}

void calculateNetSalary() {
    netSalary = basicSalary + overtimePay;
}

void displayBill() {
    cout << "--------PAYSLIP-------" << endl;
    cout << "------------------------" << endl;

    cout << "Employee Name: " << employeeName << endl;
    cout << "Basic Salary: " << basicSalary << endl;
    cout << "Overtime Pay: " << overtimePay << endl;
    cout << "Rate per hour: " << ratePerHour << endl;
    cout << "Overtime hours: " << overtimeHours << endl;
    cout << "Net Salary: " << netSalary << endl;
}
