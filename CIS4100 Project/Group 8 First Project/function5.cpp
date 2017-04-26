/* John 
   function 5
   function for finding the present value of a future function.
*/
#include <iostream>
#include "groupheader.h" // accessing header file.
using namespace std;

double ff(double amount) // definition of prototype in header file.
{
	double pv, fv, r, n, m, rip; // six variable, present value, future vale, interst, periods, 
								//times compounded, and rip( interest rate in percentage form).


	// beginning a sequence where we ask the user for value of the variable.
	cout << "what is the future value of investment?" << endl;
	cin >> fv;
	cout << "what is your interest rate?" << endl;
	cin >> r;
	cout << "what is the amount of periods for this investment?" << endl;
	cin >> n;

	rip = (r / 100); // formula to convert the interest rate to a decimal(percentage) form.

	pv = fv / ( pow(1 + rip, n) ) ; // the given formula to calculate present value value.

	amount = pv;

	cout << "The present value of your future valued investment is: $";

	return amount;

}