#include <iostream>

using namespace std;

void switchNum(int& a, int& b);

int main()
{
	int a, b;

	cout << "Input Value a: ";
	cin >> a;

	cout << "Input Value b: ";
	cin >> b;

	switchNum(a, b);

	return 0;
}

void switchNum(int& a, int& b)
{
	swap(a, b);

	cout << a << " ";
	cout << b;

}