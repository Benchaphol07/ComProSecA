#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

void DisplayMenu();
float Area(const float Radius);
float Area(const float Length, const float Widht);
float Area(const double Based, const double Hight);

int main()
{
	char Choice;
	bool Flag = true;
	do
	{
		DisplayMenu();
		cin >> Choice;
		if (Choice == '1')
		{
			float Radius;
			cout << "\nEnter radius : ";
			cin >> Radius;
			cout << "Are of Circle = " << fixed;
			cout << setprecision(2) << Area(Radius) << endl;
		}
		else if (Choice == '2')
		{
			float Length, Widht;
			cout << "Enter length and widht : ";
			cin >> Length >> Widht;
			cout << "Area of Rectangle = " << fixed;
			cout << setprecision(2) << Area(Length,Widht);
		}
		else if (Choice == '3')
		{
			float Based, Hight;
			cout << "Enter based and hight : ";
			cin >> Based >> Hight;
			cout << "Area of Triangle = " << fixed;
			cout << setprecision(2) << Area(Based,Hight);
		}
		else if (Choice == '4') Flag = false;
		else
		{
			cout << "\nYou choose out of range is ";
			cout << "not process.\n";
		}
	}while (Flag);
	cout << "\n...Exit Program...\n";
	return(0);
}
float Area(const float Radius)
{
	return(3.14159F * Radius * Radius);
}
float Area(const float Length, const float Widht)
{
	return(Length * Widht);
}
float Area(const double Based, const double Hight)
{
	return(0.5*Based * Hight);
}
void DisplayMenu()
{
	cout << "\nProgram Calculate Area\n";
	cout << "1. Circle\n2. Rectangle\n3. Triangle\n4. Exit\n";
	cout << "Enter your choose number : ";
}