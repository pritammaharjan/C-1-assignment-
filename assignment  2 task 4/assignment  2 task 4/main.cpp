/*

Object List

Variable      Type
average      double
sum=0        double
temp[14]      double
days[7]      string

Algorithm
step 1: Ask the user to enter week temperature respectively with minimum and maximum temperature
step 2 : Ask the user to enter days in the week (7 days)
step 3: calculate the sum and average of the temperature 
step 4 : use the for loop to find out the maximum and minimum temperature from the program
step 5 : Display the maximum temperature, minimim temperature and average temperature from the calcualation of the program
END
*/

#include "header.h"

using namespace std;


void main()
{

	double average, sum = 0;
	double temp[14];
	string days[7] = { "\tMonday", "\tTuesday", "\tWednesday", "\tThursday", "\tFriday", "\tSaturday","\tSunday" };
	cout << "Please enter this week temperature, \n";
	for (int i = 0; i < 7; i++)
	{
		cout << days[i] << ":";
		cin >> temp[i * 2] >> temp[i * 2 + 1];
		sum = sum + temp[i * 2] + temp[i * 2 + 1];

	}

	cout << "\n \n" << endl;

	for (int i = 0; i < 7; i++)


		average = sum / 14;


	double a = 0;
	for (int i = 0; i < 14; i++)
	{
		for (int j = i + 1; j < 14; j++)
			if (temp[i]>temp[j])
			{
				a = temp[i];
				temp[i] = temp[j];
				temp[j] = a;
			}
	}



	cout << "This week, \n";
	cout << "\tminimum temperature is: " << temp[1] << endl;
	cout << "\tmaximum temperature is: " << temp[13] << endl;
	cout << "\taverage temperature is: " << average << endl;

	system("pause");
}