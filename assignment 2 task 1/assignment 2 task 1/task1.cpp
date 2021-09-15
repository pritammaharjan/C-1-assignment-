/*
Object List
Variable        Type
x,y,option       int
confirm          char
result           int

Algorithm
step 1: Display menu: add,subtract,multiply,divide,modulus as a choice
step 2:ask the user to choose the number from 1 to 5 which to continue
step 3: ask the user to enter any two numbers to calculate
step 4: do mathematical calculation as per the user request
step 5: switch the choice to get the output from the user's input
step 6: display the result after the calculation
step 7:ask the user whether to continue the program or not
END
*/
#include <iostream>

using namespace std;

void main()
{
	int x, y, option;
	char confirm;
	cout << " MENU " << endl;
	cout << "\t 1. Add " << endl;
	cout << "\t 2. Subtract " << endl;
	cout << "\t 3. Multiply " << endl;
	cout << "\t 4. Divide " << endl;
	cout << "\t 5. Modulus " << endl;
	do {
		cout << " Enter your choice (choose from 1 to 5): ";
		cin >> option;

		cout << " Enter your two numbers: "  ;
		cin >> x >> y;
		
		int result1; //Addition in the program
		result1 = x + y;
		
		int result2; //Subraction in the program
		result2 = x - y;
		
		int result3; //Multipication in the program
		result3 = x * y;
		
		int result4; //Division in the program
		result4 = x / y;
		
		int result5;//Modulution in the program
		result5 = x % y;

		switch (option)
		{

		case 1:
			cout << " Result: " << result1 << endl;
			break;

		case 2:
			cout << " Result: " << result2 << endl;
			break;

		case 3:
			cout << " Result: " << result3 << endl;
			break;

		case 4:
			cout << " Result: " << result4 << endl;
			break;

		case 5:
			cout << " Result: " << result5 << endl;
			break;

		}

		cout << " Continue(y/n)?: ";
		cin >> confirm;

	}
	while (confirm == 'Y' || confirm== 'y');

	cout << " Thank you for using this program...... " << endl;


	system("pause");
}

