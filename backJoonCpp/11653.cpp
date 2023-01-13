#include <iostream>
using namespace std;

int main()
{
    int n, i = 2;
    cin >> n;

    for (; i * i <= n; i++)
    {
        while(n % i == 0)
        {
            cout << i << '\n';
            n /= i;
        }
    }
    if(n > 1) cout << n;
}