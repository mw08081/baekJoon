#include <iostream>
using namespace std;

int b[101];

int main()
{
    int n, m, i, j, k;
    cin >> n >> m;

    while(m--)
    {
        cin >> i >> j >> k;

        for (int p = i; p <= j; p++)
            b[p] = k;
    }

    for (int i = 1; i <= n; i++)
        cout << b[i] << " ";
}