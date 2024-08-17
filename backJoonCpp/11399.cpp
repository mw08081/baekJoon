#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    vector<int> t;
    int N, tmp, ans = 0;
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        t.push_back(tmp);
    }
    sort(t.begin(), t.end());

    for (int i = 1; i < N+1; i++)
        ans = accumulate(t.begin(), t.begin() + i, ans);
    cout << ans;
}