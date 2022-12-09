#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a == b && b == c)
        cout << a * 1000 + 10000 << endl;
    else if(a != b && b != c && a != c)
        cout << max(max(a, b), c) * 100 << endl;
    else
        cout << (a == b || a == c ? a : b) * 100 + 1000 << endl;
}