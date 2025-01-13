#include <iostream>
using namespace std;
int main()


{
	//Declare variables.
	int month, day;
	string season;

	//prompt user to print month and day.
	cout << "Enter month: " << endl;
	cin >> month;

	//prompt user to print day.
	cout << " Enter day: " << endl;
	cin >> day;

	if ((month == 3 && day >= 21) || (month == 4 || month == 5) || (month == 6 && day <= 20)) {
		cout<< "It is now Spring!";

	}
	else if ((month == 6 && day >= 21) || (month == 7 || month == 8) || (month == 9 && day <= 22)) {
		cout<< "It is now Summer! ";

	}
	else if ((month == 9 && day >= 23) || (month == 10 || month == 11) || (month == 12 && day <= 21)) {
		cout << " It is now Fall! ";
	}
	else if ((month == 12 && day >= 21) || (month == 1 || month == 2) || (month == 3 && day <= 20)) {
		cout << "It is now Winter! ";
	}
	else {
		cout << " Error! Wrong input for month or day. " << endl;


	}



	return 0;

}
/*
Enter month:
6
 Enter day:
13
It is now Spring!


*/