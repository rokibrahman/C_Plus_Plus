/* Madyan Hussain
   main.cpp
   we utilize the start menu and switch to give the user
   several option to choose from, and then use function to
   give the result of the choosen option
*/
#include <iostream>
#include "groupheader.h" // accesing the header file.
using namespace std;

int main()
{
	double amount; // variable created to be a place holder for start menu.
	int input; // variable for the switch.

	amount = 0; //setting the place holder to zero.

	// start menu to ask user for input.
start_menu:
	cout << endl << "Please choose from the menu: " << endl;
	cout << "1. Get The Lump-Sum Future Value of an investment" << endl;
	cout << "2. Get The Compounded Future Value of an investment" << endl;
	cout << "3. Get The ROI (return on investment)" << endl;
	cout << "4. Get An Acid Test Ration" << endl;
	cout << "5. Get The Present Value of a Lump-Sum future valued investment" << endl;
	cout << "6. Quit" << endl;
	cin >> input;

	// the switches with the proper function for the given options.
	switch (input){
	case 1:amount = fa(amount); cout << amount << endl; break;
	case 2:amount = fb(amount); cout << amount << endl; break;
	case 3:amount = fc(amount); cout << amount << endl; break;
	case 4:amount = fd(amount); cout << amount << endl; break;
	case 5:amount = ff(amount); cout << amount << endl; break;
	default:cout << "Goodbye .."; goto stop;
	}

stop:

	system("pause");

	return 0;
}