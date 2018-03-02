/* 
* Name: 
* Section: ITSE 1307
* Net Zero program
* Tells if user input is positive negative or zero 
-----------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

int main()
{
	double dblUserInput = 0;

	cout << "Enter any number" << endl;
	cin >> dblUserInput;

	if (dblUserInput > 0)
	{
		cout << "Your number is positive" << endl;
	}
	else if (dblUserInput == 0)
	{
		cout << "Your number is zero" << endl;
	}
	else
	{
		cout << "Your input is negative" << endl;
	}
	system("pause");
	return 0;
}