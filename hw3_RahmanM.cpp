//******************************************************
//Problem #2

/*
#include <iostream>
using namespace std;

int main()
{
//variables
double max_credit, used_credit, available_credit;

//get the data through the console
cout << "What is the maxixum amount of credit: ";
cin >> max_credit;
cout << "What is the amount of credit used: ";
cin >> used_credit;

//Calculation
available_credit = max_credit - used_credit;
cout << "Your available credit is: " << available_credit << endl;


system("pause");
return 0;
}


//******************************************************
//Problem #7
#include <iostream>
using namespace std;

int main()
{
int testSchore;
cout << "Enter your test score and I will tell you\n";
cout << "the letter grade you erned: ";
cin >> testSchore;


if (testSchore < 60)
cout << "Your grade is F.\n";
else if (testSchore < 70)
cout << "Your grade is D.\n";
else if (testSchore < 80)
cout << "Your grade is C.\n";
else if (testSchore < 90)
cout << "Your grade is B.\n";
else if (testSchore <= 100)
cout << "Your grade is A.\n";
else
cout << "That is not a valid score.\n";


system("pause");
return 0;
}
*/


//******************************************************
//Problem 5
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string month;
	double total_collected, sales, cstax; //cstax= county sales tax
	double sstax;						// sstax= state sales tax
	double tstax;					   // tstax= total sales tax
	
	cout << "Enter the month: ";
	cin >> month;
	cout << "Enter the total amount collected: ";
	cin >> total_collected;

	//calculation
	sales = (total_collected / 1.06);
	cstax = sales * 0.02;
	sstax = sales * 0.04;
	tstax = cstax + sstax;

	//print
	cout << "Month: " << month << endl;
	cout << "------------------------------\n";
	cout << fixed << showpoint << setprecision(2);
	cout << "Total Collected:		$ " << total_collected << endl;
	cout << "Sales:					$ " << sales << endl;
	cout << "County Sales Tax:		$ " << cstax << endl;
	cout << "State Sales Tax:		$ " << sstax << endl;
	cout << "Total Sales Tax:		$ " << tstax << endl;

	system("pause");
	return 0;
}



//******************************************************
/*
//Problem 8
#include <iostream>
using namespace std;

int main()
{
	double num1, num2;

	cout << "Enter two numbers and I will tell you\n";
	cout << "which number is the smaller and which is the larger: ";
	cin >> num1 >> num2;
	if (num1 > num2)
		cout << num1 << " is larger than " << num2 << endl;
	else if (num2 > num1)
		cout << num2 << " is larger than " << num1 << endl;
	else
		cout << "you entered either two equal numbers or invalid numbers.\n";




	system("pause");
	return 0;
}
*/