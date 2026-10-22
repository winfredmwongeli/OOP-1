#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student {
private:
    string studentName;
    string admissionNumber;
    double feeBalance;

public:
    void inputStudent() {
        cout << "Enter student name: ";
        getline(cin, studentName);

        cout << "Enter admission number: ";
        getline(cin, admissionNumber);

        cout << "Enter fee balance: ";
        cin >> feeBalance;
    }

    void makePayment() {
        double payment;

        cout << "Enter payment amount: ";
        cin >> payment;

        if (payment <= 0) {
            cout << "Payment must be greater than zero." << endl;
        } else if (payment > feeBalance) {
            cout << "Payment cannot be greater than the fee balance." << endl;
        } else {
            feeBalance = feeBalance - payment;
            cout << "Payment made successfully." << endl;
        }
    }

    void displayStatus() {
        cout << "\nStudent Fee Status" << endl;
        cout << "Student name: " << studentName << endl;
        cout << "Admission number: " << admissionNumber << endl;
        cout << "Remaining fee balance: "
             << fixed << setprecision(2) << feeBalance << endl;
    }
};

int main() {
    Student student;

    student.inputStudent();
    student.makePayment();
    student.displayStatus();

    return 0;
}
