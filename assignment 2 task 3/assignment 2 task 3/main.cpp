/*Object List

Varible           Type
n               int
x              double
result            double

Alorithm

step 1:Ask the user to enter number
step 2 : Ask the user to enter first parameter
step 3 : calculate the result
step 4 : display the result
END
*/

#include "header.h"

void main()
{
	int n;
	double x;
	

	cout << " Enter a number: ";
	cin >> n;


	cout << " Enter the first parameter: ";
	cin >> x;

	result(x, n);

	system("pause");
}
