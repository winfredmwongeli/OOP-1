// DRIVING TEST RESULT EVALUATION SYSTEM

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string studentName;
	double theoryMarks;
	double practicalMarks;
	double averageScore;

	cout << "DRIVING TEST RESULT EVALUATION SYSTEM" << endl;

	cout << "Enter student name: ";
	getline(cin, studentName);

	cout << "Enter theory test marks: ";
	cin >> theoryMarks;

	cout << "Enter practical test marks: ";
	cin >> practicalMarks;

	averageScore = (theoryMarks + practicalMarks) / 2;

	cout << fixed << setprecision(2);
	cout << "\n========== TEST RESULT ==========" << endl;
	cout << "Student name:   " << studentName << endl;
	cout << "Theory marks:   " << theoryMarks << endl;
	cout << "Practical marks: " << practicalMarks << endl;
	cout << "Average score:  " << averageScore << endl;

	if (averageScore >= 50)
	{
		cout << "Result: PASSED" << endl;
	}
	else
	{
		cout << "Result: FAILED" << endl;
	}

	return 0;
}
