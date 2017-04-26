/* Mohammad Rahman
Function 3
This function calculates the ROI (return on investment)
*/
#include <iostream>
#include "groupheader.h" // accessing header file
using namespace std;

double fc(double amount) // definition ofprototype in header file
{
	double roi, coi, np; // three variable. roi(return on investment), coi(cost of investment), and np(net profit).


	// beginning a sequence where we ask the user for value of the variable.
	cout << "what is the cost of the investment" << endl;

	cin >> coi;

	cout << "what is your net profit" << endl;

	cin >> np;

	roi = (np - coi) / coi; // calculate roi using the given formula.

	cout << "your return on investment is:  " << roi <<"%"<< endl; // printing out roi.

	return roi;

}