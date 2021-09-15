#include "header.h"

void result( double x, int n)
{
	
	double result = 1;


	for (int i = 1; i <= n; i++)
		result = result + i * x;

	cout << " Result :" << result << endl;
}