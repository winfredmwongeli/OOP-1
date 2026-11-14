//CT101/G/26569/25
//KIOKO WINFRED MWONGELI
#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    string employeeName;
    int employeeID;
    double basicSalary;

public:
    void setEmployeeDetails()
    {
        cout << "Enter employee name: ";
        getline(cin, employeeName);

        cout << "Enter employee ID: ";
        cin >> employeeID;

        cout << "Enter basic salary: ";
        cin >> basicSalary;
    }

    double calculateSalary()
    {
        return basicSalary + (0.10 * basicSalary);
    }

    void displayEmployeeDetails()
    {
        cout << "\nEmployee Details" << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Net Salary: " << calculateSalary() << endl;
    }
};

int main()
{
    Employee employee;

    employee.setEmployeeDetails();
    employee.displayEmployeeDetails();

    return 0;
}