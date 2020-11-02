#include <iostream>
#include "tempconvert1.h"

using namespace std;

int main()
{
	const int MIN_TEMP = 0;
	const int MAX_TEMP = 100;
	int C;
	
	cout << "Fahrenheit	  Celcius\n";
	
	for (int F = MIN_TEMP; F <= MAX_TEMP; F++)
	{
		if (F % 10 == 0) {
			C = celsius(F);
			cout << F << "               ";
			cout << C << endl;
		}
	}
	
	return 0;
}