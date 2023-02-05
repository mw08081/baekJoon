#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long tot = 1, n;
    int i, lim;
    cin >> n;

    for (int i = 2; i <= n; i++)
        for (int j = 2; j*i <= n; j++)
            tot += i;

    tot += (n+2)*(n+1) / 2;
    tot -= 3;
    cout << tot;
}