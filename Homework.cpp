#include <iostream>
using namespace std;
int main()
{
	float first, second, third, midterm, final, total, sum ;
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

		if (sum >= 50){
			cout << "You score is PASS" << endl;
		} else {
			cout << "You score is NOT PASSED" << endl;
		}
	return 0;
}
