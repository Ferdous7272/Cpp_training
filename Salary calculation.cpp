//Using if else statement in my code :D
#include <iostream>
using namespace std;

//Modifying my old simple monthly/yearly salary counter 
//Using nested if else statments
//Just toying with it lol :'D

int main() {
	float monthlySalary;

	cout << "Input your monthly salary ";
	cin >> monthlySalary;
	cout << "Monthly you get : " << monthlySalary << endl;

	float annualSalary = monthlySalary * 12; //annual or yearly salary = monthlySalary*1year(12months)
	cout << "Your Annualsalary is : " << annualSalary << endl;

	if (annualSalary >= 15000) 
		cout << "You are doing great. Be my Suger daddy lol :p " << endl;
	
	else {
		if (annualSalary >= 7000) 
			cout << "You gotta work hard " << endl;		
		else 
			cout << "You are in bad shape!! you need to hustle more. just keep hustling. You can do it!" << endl;
	}
		


	system("pause>0");

}
