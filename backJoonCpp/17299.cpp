#include <stack>
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    stack<int> s;
    int n, v;
    int seq[1000001];
    int ans[1000001];
    int* t = new int[1000001];
    fill_n(t, 1000001, 0);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v;
        seq[i] = v;
        t[v]++;
    }

    for (int i = n; i > 0; i--)
    {
        while(!s.empty() && t[seq[i]] >= t[s.top()])  s.pop();

        if(s.empty()) ans[i] = -1;
        else ans[i] = s.top();

        s.push(seq[i]);
    }
    
    for (int i = 1; i < n; i++)
        cout << ans[i] << " ";
    cout << -1;
}