#include "complex.h"
#include <iostream>

using namespace math;
using namespace std;

int main()
{
	complex a(1, 2);
	complex b(2, 4);

	complex c = a + b;
	cout << c << endl;

	getchar();

	return 0;
}