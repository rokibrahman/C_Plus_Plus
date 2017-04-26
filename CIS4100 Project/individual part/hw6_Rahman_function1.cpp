/* Mohammad Rahman
Function 1
This function calculates the Future Value of a lump sum (of investment)
*/
#include <iostream>
#include "groupheader.h" // accessing header file
using namespace std;

double fa(double amount) // definition of prototype in header file
{
	double pv, fv, r, n, m, rip; // six variable, present value, future vale, interst, periods, 
								//times compounded, and rip( interest rate in percentage form).

	// beginning a sequence where we ask the user for value of the variable.
	cout << "what is the present value of investment?" << endl;
	cin >> pv;
	cout << "what is your interest rate?" << endl;
	cin >> r;
	cout << "what is the amount of periods for this investment?" << endl;
	cin >> n;

	rip = (r / 100); // formula to convert the interest rate to a decimal(percentage) form.

	fv = pv * pow(1 + rip, n); // the given formula to calculate future value.

	amount = fv;

	cout << "The Lump-Sum Future Value of an investment is: $";

	return amount;

}