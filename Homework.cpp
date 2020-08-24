#include <iostream>
#include <string>
using namespace std;
int main()
{
	float first, second, third, midterm, final, total, sum ;
	string result;
	
		cout << "==========QUIZZES===============" << endl;
		cout << "Enter first quizz (10) : ";
		cin >> first;
		cout << "Enter second quizz (10) : ";
		cin >> second;
		cout << "Enter third quizz (10) : ";
		cin >> third;
		
		cout << "==========MID-TERM==============" << endl;
		cout << "Enter mid-term (40) : ";
		cin >> midterm;

		cout << "===========FINAL================" << endl;
		cout << "Enter final (50) : ";
		cin >> final;

		//Sum of quizzes
		total = (first + second + third) / 3;
		cout << "Quizzes Total : " << total << endl;
		cout << "Mid term : " << midterm << endl;
		cout << "Final : " << final << endl;

		//Total
		sum = midterm + final + total;
		cout << "Total : " << sum << endl;

	
		result = (sum >= 50) ? "You score is PASS" : "You score is FAIL";
		cout << result << endl;
	
	return 0;
}
