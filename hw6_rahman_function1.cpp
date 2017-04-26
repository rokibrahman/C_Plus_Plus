//Mohammad Rahman
// Function 1
// This function calculates the Future Value of a lump sum (of investment)
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Function prototype
double function1 (double, double, int);
  
        
int main()
{
   double present_value, rate;
   int periods;
   double future_value;
   
    cout << "enter present value: ";
    cin >> present_value;// >> endl;
    cout << "enter interest rate (as decimal): ";
    cin >> rate;// >> endl;
    cout << "enter the number of periods: ";
    cin >> periods;// >>endl;
   
   future_value = function1 (present_value, rate, periods);
   cout << "The future value is: " << future_value;// <<endl;
   
   return 0;
}

// Function#1: This function calculates the Future Value of a lump sum (of investment)

double function1 (double pv, double r, int n) //pv: primary value; r: interest rate per period; n: number of periods
    {
        double fv;
       
		//calculation
        fv =  pv * pow((1+r), n);
        
        return fv;  //returns the futute value to the main function as double    
        }
