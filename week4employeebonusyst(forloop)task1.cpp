//CT101/G/26569/25
//KIOKO WINFRED MWONGELI
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string name[5];
    double basicSalary[5];
    double bonus[5];
    double totalSalary[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter employee " << i + 1 << " name: ";
        cin >> name[i];

        cout << "Enter basic salary for " << name[i] << ": ";
        cin >> basicSalary[i];

        bonus[i] = 0.05 * basicSalary[i];
        totalSalary[i] = basicSalary[i] + bonus[i];
    }

    cout << "\nEmployee Salary Report\n";
    cout << "----------------------\n";

    for (int i = 0; i < 5; i++) {
        cout << fixed << setprecision(2);
        cout << "Employee " << i + 1 << "\n";
        cout << "Name: " << name[i] << "\n";
        cout << "Basic Salary: " << basicSalary[i] << "\n";
        cout << "Bonus: " << bonus[i] << "\n";
        cout << "Total Salary: " << totalSalary[i] << "\n\n";
    }

    return 0;
}
