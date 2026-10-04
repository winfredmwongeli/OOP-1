//CT/101/G/26569/25
//KIOKO WINFRED MWONGELI
#include <iostream>
#include <string>
using namespace std;

int main() {
	string studentName;
	int marks;
	char grade;

	cout << "Enter the student's name: ";
	getline(cin, studentName);

	cout << "Enter the exam marks (0-100): ";
	cin >> marks;

	if (marks >= 70 && marks <= 100) {
		grade = 'A';
	} else if (marks >= 60 && marks <= 69) {
		grade = 'B';
	} else if (marks >= 50 && marks <= 59) {
		grade = 'C';
	} else if (marks >= 40 && marks <= 49) {
		grade = 'D';
	} else if (marks >= 0 && marks < 40) {
		grade = 'E';
	} else {
		cout << "Marks must be between 0 and 100.\n";
		return 1;
	}

	cout << "\nStudent name: " << studentName << endl;
	cout << "Exam marks: " << marks << endl;
	cout << "Grade: " << grade << endl;

	return 0;
}
