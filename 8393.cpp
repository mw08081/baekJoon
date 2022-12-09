#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << (n % 2 == 0 ? (n + 1) * n / 2 : n * (n - 1) / 2 + n) << endl;
}