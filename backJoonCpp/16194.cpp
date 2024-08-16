#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 1001

using namespace std;

int dp[MAX];
int p[MAX];

void Get(int v)
{
    vector<int> vs;

    for (int i = 1; i < v; i++)
        vs.push_back(dp[i] + dp[v-i]);
    vs.push_back(p[v]);

    dp[v] = *min_element(vs.begin(), vs.end());
}

int main()
{
    int N;
    cin >> N;

    for (int i = 1; i < N+1; i++)
        cin >> p[i];

    for (int i = 1; i < N+1; i++)
        Get(i);
    
    cout << dp[N];
}