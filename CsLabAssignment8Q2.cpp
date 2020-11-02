#include <iostream>
#include <math.h>

using namespace std;

void f(float& area, float& perimeter, float& pi, float& r);

int main()
{
	float area, perimeter, pi = 3.14159,r;
	
	f(area, perimeter, pi, r);

	cout << area<<endl;
	cout << perimeter;
}

void f(float& area, float& perimeter, float& pi, float& r)
{

	cout << "Input a floating point Number: ";
	cin >> r;

	area = pi*(pow(r, 2));
	perimeter = 2 * pi * r;
}