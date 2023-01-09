#include <iostream>
using namespace std;

int main()
{
    int n, f, t;
    cin >> n;

    f = n / 5;
    while(f + 1)
    {
        t = n - f*5;
        if(t % 3 == 0)
            break;
        f--;
    }
    if(f == -1) cout << -1;
    else cout << f + t / 3;
}
