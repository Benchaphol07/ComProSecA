#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	//***input***
	cout << "****************************" << endl;
    string name , surname;
    float salary , sale , commission , revenue;
    cout << "Enter Name : ";
	cin >> name;
	cout << "Enter Surname : ";
	cin >> surname;
    cout << "Enter Salary : ";
    cin >> salary;
    cout << "Enter Sale : ";
    cin >> sale;
    cout << "Enter Commission Percent : ";
    cin >> commission;
    cout << endl;

	//*** output ***
    cout << "Your name = " << name << " " << surname << endl;
    revenue = (sale * (commission / 100)) + salary;
    cout << "Total Revenue " << revenue << " Bath";
    cout << endl;
    cout << "----------------------------";
	return 0;
}