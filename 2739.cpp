#include <iostream>
using namespace std;

int main()
{
	int a = 0;

	cin >> a;

	for (int i = 1; i < 10; i++)
		cout << a << " * " << i << " = " << a * i << endl;

	return 0;
}