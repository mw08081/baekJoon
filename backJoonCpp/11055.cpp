#include <iostream>
using namespace std;

int s[1001];
int dp[1001];

void Get(int v)
{
    cout << "line " << v << "(std : " << s[v] << ") : " ;
    int tot = 0, prev = 0;
    for (int i = 1; i < v; i++)
    {
        if(s[v] > s[i] && s[i] > prev){
            cout << s[i] << " ";
            tot += s[i];
            prev = s[i];
        }
    }
    tot+=s[v];
    
    dp[v] = ((dp[v-1] > tot) ? dp[v-1] : tot);
    cout << "/ dp[" << v << "] : ";
    cout << dp[v] << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N;
    cin >> N;

    for (int i = 1; i < N+1; i++)
        cin >> s[i];

    dp[1]=s[1];
    for (int i = 2; i < N+1; i++)
        Get(i);

    cout << dp[N];

// 6
// 1 3 8 2 3 7    
}