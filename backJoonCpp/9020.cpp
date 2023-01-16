#include <iostream>
using namespace std;

#define LIM 10001
int main()
{
    int arr[LIM] = {1, 1}, t, n, min, a, b;
    cin >> t;

    for (int i = 2; i*i < LIM; i++)
        if(!arr[i])
            for (int j = 2; j*i <= LIM-1; j++)
                arr[i*j] = 1;

    while(t--)
    {
        cin >> n;
        min=LIM;
        for (int i = 2; i < n/2 + 1; i++)
        {
            if(!arr[i] && !arr[n-i] && n-2*i < min)
            {
                min = n - 2*i;
                a = i;
                b = n-i;
            }
        }
        cout << a << " " << b << '\n';
    }
}