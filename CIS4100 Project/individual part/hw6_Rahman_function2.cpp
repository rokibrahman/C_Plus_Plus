/* Mohammad Rahman
Function 2
This function calculates the Future Value of a compund (of investment)
*/
#include <iostream>
#include "groupheader.h" // accessing header file
using namespace std;

double fb(double amount) // definition of prototype in header file
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
	cout << "what is the compounding frequency (times compounded)?";
	cin >> m;


	rip = (r / 100); // formula to convert the interest rate to a decimal(percentage) form.

	fv = pv * pow(1 + (rip/m), n*m); // the given formula to calculate future value.

	amount = fv;

	cout << "The compounded Future Value of an investment is: $";

	return amount;

}