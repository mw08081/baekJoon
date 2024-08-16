#include <iostream>
#include <algorithm>
using namespace std;

int t[500][500];
int dp[500][500];

void Get(int l)
{
    for (int i = 0; i < l+1; i++)
    {
        if(i == 0){
            dp[l][i] = dp[l-1][i] + t[l][i];
        } 
        else if (i == l){
            dp[l][i] = dp[l-1][i-1] + t[l][i];
        } 
        else {
            dp[l][i] = t[l][i] + max(dp[l-1][i-1],  dp[l-1][i]);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < i+1; j++)
            cin >> t[i][j];
        
        
    dp[0][0] = t[0][0];
    for (int i = 1; i < N; i++)
        Get(i);
    
    cout << *max_element(*(dp+N-1), *(dp+N-1)+N);
}