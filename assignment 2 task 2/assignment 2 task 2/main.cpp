/*
Object List

Variable       Type
into            int
LongInt         long int
LongDouble      double

ALgorithm
step 1: use the three of the given integers in the order
step 2 : place the value of integers in their main order with the variable
step 3 : output the order variable given by the user
step 4 : sorting the integers with the function file in the program
step 5 : make the prototype of the header file in the program
END
*/

#include "header.h"

void main()
{
	int orderInt;
	long int orderLongInt;
	double orderdouble;


	int listValueInt[] = { 23, 2, 34, 23, 43, 22, 32, 32, 43, 34 };
	long int listValueLong[] = { 7000, 15, 34, 2373645, 43, 22, 9392929294, 46, 32, 111143 };
	double listValueDbl[] = { 23.3847239, 2.3974, 34.183734, 23.0, 43.36381, 22.3, 32.0, 32.1919,
		43.938363, 34.38364 };

	orderInt = into(listValueInt[10]);
	orderLongInt = LongInt(listValueLong[10]);
	orderdouble = LongDouble(listValueDbl[10]);

	cout << " orderInt: " << orderInt << endl;

	cout << " orderLongInt: " << orderLongInt << endl;

	cout << " LongDouble: " << LongDouble << endl;

	system("pause");
}