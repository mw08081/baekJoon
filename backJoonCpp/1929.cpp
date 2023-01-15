#include <iostream>
using namespace std;

int main()
{
    int m, n, arr[1000001] = {1, 1};
    cin >> m >> n;

    for (int i = 2; i*i <= n; i++)
        if(!arr[i]) 
            for (int j = 2; i*j <= n; j++)
                arr[i*j] = 1;

    for (int i = m; i <= n; i++)
        if(!arr[i])
            cout << i << '\n';
}