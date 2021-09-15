#include "header.h"

int into(int)
{
	int temp = 0;
	int listValueInt[] = { 23, 2, 34, 23, 43, 22, 32, 32, 43, 34 };


	for (int i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= 9; j++)
			if (listValueInt[j] < listValueInt[j + 1])
			{
				temp = listValueInt[j];
				listValueInt[j] = listValueInt[j + 1];
				listValueInt[j + 1] = temp;
			}

	}
	for (int i = 0; i < 10; i++)
		cout << listValueInt[i] << endl;
	cout << endl;

	return listValueInt[9];
}
long int LongInt(long int)
{
	int temp = 0;
	long int listValueLong[] = { 7000, 15, 34, 2373645, 43, 22, 9392929294, 46, 32, 111143 };

	for (int i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= 9; j++)
			if (listValueLong[j] < listValueLong[j + 1])
			{
				temp = listValueLong[j];
				listValueLong[j] = listValueLong[j + 1];
				listValueLong[j + 1] = temp;
			}

	}
	for (int i = 0; i < 10; i++)
		cout << listValueLong[i] << endl;
	cout << endl;

	return listValueLong[9];
}

double LongDouble(double)
{
	int temp = 0;
	double listValueDbl[] = { 23.3847239, 2.3974, 34.183734, 23.0, 43.36381, 22.3, 32.0, 32.1919,
		43.938363, 34.38364 };

	for (int i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= 9; j++)
			if (listValueDbl[j] < listValueDbl[j + 1])
			{
				temp = listValueDbl[j];
				listValueDbl[j] = listValueDbl[j + 1];
				listValueDbl[j + 1] = temp;
			}

	}
	for (int i = 0; i < 10; i++)
		cout << listValueDbl << endl;
	return listValueDbl[10];
}
