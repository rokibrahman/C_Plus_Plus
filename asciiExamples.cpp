#include <iostream>

using namespace std;


int main()
{


char letter = 'A';        
char numChar = '4'; 

cout << letter << '\t' << numChar << endl;

char ch = 'a';
cout << ++ch << '\n';

cout << "---------------------------------" << endl;

int i = '2' + '3'; // (int)'2' is 50 and (int)'3' is 51
cout << "i is " << i << endl; // i is decimal 101
  
int j = 2 + 'a'; // (int)'a' is 97
cout << "j is " << j  << endl;

cout << j << " is the ASCII code for character " << static_cast<char>(j) <<  endl;

cout <<"two \\\\ produce a backslash: \\" << endl;

system("pause");
return 0;

}
