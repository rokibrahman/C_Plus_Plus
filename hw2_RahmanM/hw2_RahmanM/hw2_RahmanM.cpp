//Mohammad Rahman
//Assignment# 2
//***********************************


//Problem #3
/*
#include<iostream>
using namespace std;
int main()
{
	int freeze = 32, boil = 212;
	freeze = 0;
	boil = 100;
	cout << freeze << endl << boil << endl;
	

system("Pause");
return 0;
}
*/
//*********************************************



//Problem #4
/*
#include<iostream>
using namespace std;
int main()
{
	cout <<"Be careful \n";
	cout <<"This might/n be a trick ";
	cout <<"question\n";

system("Pause");
return 0;
}
*/
//**************************************************


//Problem #5
/* What's wrong with this program? 
#include<iostream>
using namespace std;
int main()
{
	int a, b, c; // Three integers
		a = 3;
		b = 4;
		c = a + b;
		cout << "The value of c is %d" << c;

system("Pause");
return 0;
}
*/
//**************************************************



//Problem #6
/*
#include <iostream>
using namespace std;


int main()
{
//declare variable
float purchase = 95;
float sTax = 0.04, cTax = 0.02; // sTax = State Tax; cTax = Country Tax
float tTax; // tTax = Total Tax

//calculation
tTax = (purchase * sTax) + (purchase * cTax);

//print
cout << "Amount purchased: $95\n";
cout << "State tax rate: " <<sTax << endl;
cout << "Country tax rate: " << cTax << endl;
cout <<" " << endl;
cout << "Total sales tax is: " << tTax << endl;

system ("Pause");
return 0;
}
//*********************************************************
*/


//problem #7
#include <iostream>
using namespace std;


int main()
{
//declare variable
	float itm1=11.95, itm2=24.95, itm3=6.95, itm4=12.95, itm5=3.95;
	float subtotal, tax, total;
	float txRate= 0.07; //txRate = Tax Rate

//calculation
	subtotal = (itm1+itm2+itm3+itm4+itm5);
	tax = subtotal*txRate;
	total= subtotal + tax;

//Print
	cout <<"Price of item 1: " << itm1 << endl;
	cout <<"Price of item 2: " << itm2 << endl;
	cout <<"Price of item 3: " << itm3 << endl;
	cout <<"Price of item 4: " << itm4 << endl;
	cout <<"Price of item 5: " << itm5 << endl;

	cout <<"Subtotal: " << subtotal << endl;
	cout <<"Sales tax rate: " << txRate << endl;
	cout <<"Tax to be collected: " << tax << endl;
	cout <<"_____________________________________" << endl;
	cout <<"Total: " << total << endl;



system ("Pause");
return 0;
}
//*********************************************************
