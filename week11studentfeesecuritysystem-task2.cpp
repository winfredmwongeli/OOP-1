//CT101/G/26569/25
//KIOKO WINFRED MWONGELI
#include<iostream>
using namespace std;

class Student
{
    private:
    string StudentName;
    string AdmissionNumber;
    double FeeBalance;
    
    public:
    void inputStudentData()
    {
        cout<<"Enter student name: ";
        getline(cin, StudentName);
        cout<<"Enter admission number: ";
        getline(cin, AdmissionNumber);
        cout<<"Enter fee balance: ";
        cin>>FeeBalance;
    }

    void makePayment()
{
double amount;
cout<<"Enter amount:";
cin>> amount;

if (amount > 0 && amount <= FeeBalance)
{
    FeeBalance =FeeBalance-amount;
    cout<<"Payment successfully made. Remaining balance: "<<FeeBalance<<endl;
}
else if (amount <= 0)
{
    cout<<"Invalid amount. Payment not made."<<endl;
}
else
{
    cout<<"Insufficient balance."<<endl;
}
}

void displayStatus()
{
    cout<<"\nStudent Fee Status:"<<endl;
    cout<<"Student Name: "<<StudentName<<endl;
    cout<<"Admission Number: "<<AdmissionNumber<<endl;
    cout<<"Fee Balance: "<<FeeBalance<<endl;
}
};
int main()
{
    Student student;
    student.inputStudentData();
    student.makePayment();
    student.displayStatus();
    
    return 0;
}