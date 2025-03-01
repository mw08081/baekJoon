#include <iostream>
using namespace std;

int main()
{
    int v;
    cin >> v;

    int dp[1001] = {0, 1, 2};
    for(int j = 3; j <= v; j++)
        dp[j] = (dp[j-1] + dp[j-2]) % 10007;

    cout << dp[v];
}