#include <iostream>
#include <string>

using namespace std;

int main() 
{

int height;
cout << "How tall is the room? ";
cin >> height;

double m;
m = (y2-y1) /(x2-x1);
cout <<  m;

m = static_cast<double>(y2-y1)/(x2-x1);

char ch = 'C';
cout << ch << " is " << static_cast<int>(ch);

// cin vs getline
string name;
string city;

cout << "Please enter your name: ";
cin >> name;
//getline(cin, name);

cout << "Enter the city you live in: ";
cin >> city;
//getline(cin, city);

cout << "Hello " << name << endl;
cout << "You live in " << city << endl;


system("pause");
return 0;

}
