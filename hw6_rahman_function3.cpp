//Mohammad Rahman
// Function 3 ROI: This function calculates the return of investment (ROI)
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Function Prototype
double function3 (double, double, double);
  
        
int main()
{
   double total_revenue, total_exp, investment_cost;
   double return_on_investment;
   
    cout << "enter the total revenue: ";
    cin >> total_revenue;// >> endl;
    cout << "enter the total expenxes: ";
    cin >> total_exp;// >> endl;
    cout << "enter the cost of investment: ";
    cin >> investment_cost;// >>endl;
  
   
   return_on_investment = function3 (total_revenue, total_exp, investment_cost);
   cout << "The return on investment is: " << return_on_investment <<"%";// <<endl;
   
   return 0;
}

// Function #3 ROI: This function calculates the return of investment (ROI)
double function3 (double tr, double te, double ci) //tr: Total revenue; te: total expenses, ci: cost of investment
    {
        double roi;

        //calculation
        roi = (((tr-te)-ci)/ci)*100 ;
        
        return roi;      //returns the roi to the main function as double
        }
