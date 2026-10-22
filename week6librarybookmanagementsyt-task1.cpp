//KIOKO WINFRED MWONGELI
//CT101/G/26569/25
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int copiesAvailable;

public:
    void inputDetails() {
        cout << "Enter book title: ";
        getline(cin, title);

        cout << "Enter author: ";
        getline(cin, author);

        cout << "Enter number of copies available: ";
        cin >> copiesAvailable;
    }

    void borrowBook() {
        if (copiesAvailable > 0) {
            copiesAvailable--;
            cout << "Book borrowed successfully." << endl;
        } else {
            cout << "No copies are available to borrow." << endl;
        }
    }

    void displayDetails() {
        cout << "\nBook Details" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies available: " << copiesAvailable << endl;
    }
};

int main() {
    Book book;

    book.inputDetails();
    book.borrowBook();
    book.displayDetails();

    return 0;
}
