#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cin >> n;
    n -= 1;

    while(n >= i)
        n -= (i++);

    cout << (i % 2 == 0 ? 1+n : i-n) << "/" << (i % 2 == 0 ? i-n : 1+n);
}