#include <iostream>
using namespace std;

int b[101];
int main()
{
    int n, m, i, j, t;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        b[i] = i;

    while(m--)
    {
        cin >> i >> j;

        t = b[i];
        b[i] = b[j];
        b[j] = t;
    }
    
    for (int i = 1; i <= n; i++)
        cout << b[i] << " ";
    
}

