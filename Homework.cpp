#include<iostream>
using namespace std;
void display(int salary[], int);
int cal_bonus(int);
int main()
{
	int num;
	cout << "Enter Number of person : ";
	cin >> num;
	cout << endl;
	int *salary = new int[num];
	for(int i = 0; i<num; i++)
	{
		cout << "Enter the salary [" << i+1 << "] : ";
		cin >> salary[i];
		cout << endl;
	}
	display(salary, num);
	return(0);
}
void display(int salary[], int num)
{
	cout << "---------------------------------------------------------\n";
	cout << "There are " << num << " persons." << endl;
	for(int i = 0; i < num; i++)
	{
		cout << "The Salary for person ["<< i+1 << "] = " << salary[i];
		cout << " and Bonus = " << cal_bonus(salary[i]) << endl;
	}
	cout << "---------------------------------------------------------\n";
}
int cal_bonus(int salary)
{
	return(salary*2);
}