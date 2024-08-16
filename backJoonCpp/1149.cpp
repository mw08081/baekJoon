#include <iostream>
#include <algorithm>
using namespace std;

int c[1000][3];
int dp[1000][3];

void Get(int l)
{
    int a, b;
    a = c[l][0] + dp[l-1][1];
    b = c[l][0] + dp[l-1][2];
    dp[l][0] = min(a, b);

    a = c[l][1] + dp[l-1][0];
    b = c[l][1] + dp[l-1][2];
    dp[l][1] = min(a, b);

    a = c[l][2] + dp[l-1][0];
    b = c[l][2] + dp[l-1][1];
    dp[l][2] = min(a, b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < 3; j++)
            cin >> c[i][j];

    for (int i = 0; i < 3; i++)
        dp[0][i] = c[0][i];
    
    for (int i = 1; i < N; i++)
        Get(i);

    cout << min({dp[N-1][0], dp[N-1][1],  dp[N-1][2]});
}