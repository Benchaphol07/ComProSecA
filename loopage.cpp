#include<iostream>
using namespace std;
int calAge(int);
int main ()
{
	int year;
	for (int n=1; n<=3; n++ )
	{
		cout << "Enter Year " << n << " : ";
		cin >> year;
		int age= calAge(year) ;
		cout << "Age " << n << " : " << age << endl;
	}
	cout << "\nThank you." << endl;
	return (0);
}
int calAge(int year)
{
	int age;
	age = 2563 - year;
	return(age);
}
