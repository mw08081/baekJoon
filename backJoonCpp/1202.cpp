#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const std::pair<int, int> &a, const std::pair<int, int> &b) {
    return a.second > b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K, x, y;
    long long ans = 0;
    vector<pair<int, int>> j;
    int b[300000] = {0};

    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        cin >> x >> y;
        j.push_back(make_pair(x, y));
    }
    for (int i = 0; i < K; i++)
        cin >> b[i];
    
    sort(j.begin(), j.end(), cmp);
    sort(b, b+K);
    
    for (int x = 0; x < N; x++)
    {
        for (int y = 0; y < K; y++)
        {
            if(j[x].first <= b[y]) {
                ans += j[x].second;
                b[y] = 0;
                break;
            }    
        }
    }
    cout << ans;
}