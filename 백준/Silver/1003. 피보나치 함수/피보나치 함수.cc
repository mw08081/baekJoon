// baekjoon 1003 번
// 2025년 9월 17일 17:30

#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> dp(41, pair<int, int>());

void fibo(int n)
{
    if (n == 0)
    {
        dp[0] = {1, 0};
        return;
    }
    else if (n == 1)
    {
        dp[1] = {0, 1};
        return;
    }

    if (dp[n - 1].first == 0 && dp[n - 1].second == 0)
        fibo(n - 1);
    if (dp[n - 2].first == 0 && dp[n - 2].second == 0)
        fibo(n - 2);

    dp[n].first = dp[n - 1].first + dp[n - 2].first;
    dp[n].second = dp[n - 1].second + dp[n - 2].second;
}

int main()
{
    int n, t;
    cin >> n;

    while (n--)
    {
        cin >> t;
        fibo(t);

        cout << dp[t].first << " " << dp[t].second << '\n';
    }
    return 0;
}