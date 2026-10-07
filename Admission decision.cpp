//CT/101/G/26569/25
//KIOKO WINFRED MWONGELI
#include <iostream>
#include <string>
using namespace std;

int main() {
	string studentName;
	int age;
	int examScore;
	string decision;

	cout << "Enter the student's name: ";
	getline(cin,studentName);

	cout << "Enter the student's age: ";
	cin >> age;

	cout << "Enter the exam score: ";
	cin >> examScore;

	if (age >= 18) {
		if (examScore >= 50) {
			decision = "Admitted";
		} else {
			decision = "Not Admitted: Low Score";
		}
	} else {
		decision = "Not Admitted: Underage";
	}

	cout << "\nStudent name: " << studentName << endl;
	cout << "Age: " << age << endl;
	cout << "Exam score: " << examScore << endl;
	cout << "Admission decision: " << decision << endl;

	return 0;
}
