#include <iostream>
using namespace std;

int f2(int v)
{
    for (long long i = 0; i < v; i++)
    {
        /* code */
    }
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, k, r;
    int t, x = 0, y = 0;
    //cin >> n >> k;
    // n = 2000000000, k = 0;
    n = 25, k = 12;

    r = n - k;
    
    for(int i = n; i > k; i--)
    {
        t = i;
        while(t % 2 == 0)
        {
            x++;
            t /= 2;
        }
        while(t % 5 == 0)
        {
            y++;
            t /= 5;
        }
    }
    cout << x << " " << y << endl;
    for(int i = 2; i <= r; i++)
    {
        t = i;
        while(t % 2 == 0)
        {
            x--;
            t /= 2;
        }
        while(t % 5 == 0)
        {
            y--;
            t /= 5;
        }
    }
    cout << x << " " << y << endl;
    cout << ((x > y) ? y : x);
}