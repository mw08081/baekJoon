#include <iostream>

using namespace std;

int main()
{
    long long dp[91] = {0, 1, 1};
    int N;
    cin >> N;

    for (int i = 3; i < N+1; i++)
        dp[i] = dp[i-1] + dp[i-2];

    cout << dp[N];
    
}