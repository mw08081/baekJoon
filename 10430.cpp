#include <iostream>
using namespace std;

int main()
{
	int A = 0, B = 0, C = 0;

	cin >> A >> B >> C;

	
	cout << (A + B) % C << endl;
	cout << ((A % C) + (B % C)) % C << endl;
	cout << (A * B) % C << endl;
	cout << ((A % C) * (B % C)) % C << endl;

	

	return 0;
}