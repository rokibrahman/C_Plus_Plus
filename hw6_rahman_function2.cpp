//Mohammad Rahman
// Function 2
//This function calculates the Future Value with compounding interest
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Function prototype
double function2 (double, double, int, int);
  
        
int main()
{
   double present_value, rate;
   int periods, comp_frequency;
   double future_value;
   
    cout << "enter present value: ";
    cin >> present_value;// >> endl;
    cout << "enter interest rate(as decimal): ";
    cin >> rate;// >> endl;
    cout << "enter the number of periods: ";
    cin >> periods;// >>endl;
    cout << "enter the compounding frequency: ";
    cin >> comp_frequency;
   
   future_value = function2 (present_value, rate, periods, comp_frequency);
   cout << "The future value is: " << future_value;// <<endl;
   
   return 0;
}

//Function #2: This function calculates the Future Value with compounding interest

double function2 (double pv, double r, int n, int m) //pv: primary value; r: interest rate per period; n: number of periods; m: compounding frequency
    {
        double fv;

		//calculation
        fv =  pv * pow((1+(r/m)), (n*m));
        
        return fv;   //returns the future value to the main function as double   
        }
