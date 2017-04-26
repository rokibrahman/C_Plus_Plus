//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int numCount, total=0;
//	double average;
//	cout << "How many numbers do you want to average? ";
//	cin >> numCount;
//	for (int count = 0; count < numCount; count++)
//	{
//		int num;
//		cout << "Enter a number: ";
//		cin >> num;
//		total += num;
//	
//	}
//	average = total / numCount;
//	cout << "The average is " << average << endl;
//
//	system("pause");
//	return 0;
//}

//****************************************************
//Problem 4
/*
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	double num1, num2, ans;

	double seed = time(0);
	srand(seed);

	cout << "Add the following numbers: " << endl;

	num1= rand() % 350;
	num2= rand() % 350;
	ans = num1 + num2;

	cout << "\n";
	cout << num1 << " + " << num2 << " = " << endl;
	system("pause");
	cout << num1 << " + " << num2 << " = " << ans << endl;
	system("pause");
	return 0;
}
*/

/*
//**********************************************************
//Problem 5
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	double num1, num2, ans, studentAns;

	double seed = time(0);
	srand(seed);

	cout << "Add the following numbers: " << endl;

	num1 = rand() % 350;
	num2 = rand() % 350;
	ans = num1 + num2;

	cout << "\n";
	cout << num1 << " + " << num2 << " = " << endl;
	system("pause");
	cout << "Enter your answer: ";
	cin >> studentAns;
	if (studentAns == ans)
		cout << "Contratulation! Your answer is correct!\n";
	else
	{
		cout << "Sorry, wrong answer\n";
		cout << "The correct answer is:\n";
		cout << num1 << " + " << num2 << " = " << ans << endl;
	}
	system("pause");
	return 0;
}
*/

/*
//********************************************************************
//Problem 6
#include <iostream>
using namespace std;

int main()
{
	char a, s, m, d; // a: addition, s: subtraction, m: multiplication, d: division


	system("pause");
	return 0;
}
*/

#include <iostream>
using namespace std;

int main()
{
	int menu;

	do
	{
		cout << "Choose from the following Menu:\n";
		cout << "1: Addition | 2: subtraction | 3: multiplication | 4: division | 5: Exit\n";
		cin >> menu;


	} while (menu > 0 || menu < 5);
	
		cout << "Please enter a valid number between 1 and 5\n";
	
	



	system("pause");
	return 0;
}



