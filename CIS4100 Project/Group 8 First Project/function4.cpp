/* John
function 3
function for finding the Acid Test Ration (ATR).
*/

#include <iostream>
#include "groupheader.h" // accessing header file.
using namespace std;

double fd(double amount) // definition of prototype in header file.
{
	double ca, cl, c, ce, ar, sti, ap, stl, atr, i; //ten variable, current assets,current liablities, cash, cash equvilant,
								                    //accounts recievable, short-term investments, accounts payable,
												    //short-term loans, acid test ratio, and inventory.



	// beginning a sequence where we ask the user for value of the variable.
	cout << "What is you total cash?" << endl;
	cin >> c;

	cout << "What is your total cash equivalent?" << endl;
	cin >> ce;

	cout << "what is your total accounts recievable?" << endl;
	cin >> ar;

	cout << "what is your total short term investments" << endl;
	cin >> sti;

	cout << "what is your total inventory amount?" << endl;
	cin >> i;

	cout << "what is your total acounts payable?" << endl;
	cin >> ap;

	cout << "what is your total short term loans?" << endl;
	cin >> stl;


	ca = c + ce + ar + sti; // calculating current assets

	cl = ap + stl; // calculating curent liabilities


	atr = (ca - i) / cl; // calculation the acid test ration with the given formula.

	cout << "your Acid Test Raion is: "<< endl;

	amount = atr;

	return amount;

}