//CT101/G/26569/25
//KIOKO WINFRED MWONGELI
#include <iostream>
#include <string>
using namespace std;

bool hasUppercase(const string& password) {
    for (char ch : password) {
        if (ch >= 'A' && ch <= 'Z') return true;
    }
    return false;
}

bool hasLowercase(const string& password) {
    for (char ch : password) {
        if (ch >= 'a' && ch <= 'z') return true;
    }
    return false;
}

bool hasDigit(const string& password) {
    for (char ch : password) {
        if (ch >= '0' && ch <= '9') return true;
    }
    return false;
}

int main() {
    string password, confirmPassword;

    cout << "Create a password: ";
    cin >> password;

    cout << "Confirm password: ";
    cin >> confirmPassword;

    if (password != confirmPassword) {
        cout << "Password mismatch. Please try again." << endl;
        return 0;
    }

    if (password.length() < 8) {
        cout << "Password must be at least 8 characters long." << endl;
        return 0;
    }

    if (!hasUppercase(password)) {
        cout << "Password must contain at least one uppercase letter." << endl;
        return 0;
    }

    if (!hasLowercase(password)) {
        cout << "Password must contain at least one lowercase letter." << endl;
        return 0;
    }

    if (!hasDigit(password)) {
        cout << "Password must contain at least one digit." << endl;
        return 0;
    }

    cout << "Password verified successfully." << endl;

    return 0;
}
