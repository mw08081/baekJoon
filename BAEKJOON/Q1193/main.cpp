#include <iostream>
using namespace std;;

int main()
{
	int dist;

	int a1 = 1;
	int an;

	int n = 1;

	int a = 2;
	int d = 1;

	cin >> dist;

	an = a1;
	while (an < dist)
	{
		n++;
		an = a1 + (n - 1) * (2 * a + (n - 2) * d) / 2;
	}

	if (n % 2 != 0)
		cout << 1 + (an - dist) << "/" << n - (an - dist) << endl;
	else
		cout << n - (an - dist) << "/" << 1 + (an - dist) << endl;

	return 0;
}

/*

#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int i = 1;
	while (N > i) {
		N -= i;
		i++;
	}

	if (i % 2 == 1)
		cout << i + 1 - N << '/' << N << endl;
	else
		cout << N << '/' << i + 1 - N << endl;
}

*/