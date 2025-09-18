// baekjoon 11053 번
// 2025년 9월 18일 12:02

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> dp(v.size());

    while (n--)
        cin >> v[v.size() - n - 1];

    dp[0] = 1;
    for (auto i = 1; i < v.size(); i++)
    {
        int max = 0;
        for (auto j = 0; j < i; j++)
        {
            if (v[i] > v[j] && max < dp[j])
            {
                max = dp[j];
            }
        }
        dp[i] = max + 1;
    }

    cout << *max_element(dp.begin(), dp.end());

    return 0;
}
