#include <iostream>
using namespace std;

//simple monthly/yearly salary counter

int main() {
	float monthlySalary;

	cout << "Input your monthly salary ";
	cin >> monthlySalary;
	cout << "Monthly you get : "  << monthlySalary << endl;

	int months;
	cout << "Enter the number of how many months total salary you wana know" << endl;
	cin >> months;
	float usersWishedSalary = monthlySalary * months;
	cout << "Your output is : " << usersWishedSalary << endl;
	
	system("pause>0");

}