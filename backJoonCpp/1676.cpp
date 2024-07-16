#include <iostream>
using namespace std;

int main()
{
    int n, x = 0, y = 0;
    bool isPrime[501] = {0};

    isPrime[0] = isPrime[1] = true;
    for(int i = 2; i*i < 501; i++)
        if(!isPrime[i])
            for(int j = 2; i * j < 501; i++)
                isPrime[i*j] = true;

    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> n;

    for(int i = 2; i <= n; i++)
    {
        int t = i;
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
    cout << ((x>y) ? y : x);
}