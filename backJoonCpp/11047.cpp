#include <iostream>
using namespace std;

int main()
{
    int v[10];
    int N, K, ans =0;
    cin >> N >> K;

    for (int i = N-1; i >= 0; i--)
        cin >> v[i];
    
    for (int i = 0; i < N; i++)
    {
        if( v[i] <= K ){
            ans += (K/v[i]);
            K %= v[i];
        }
    }
    cout << ans;   
}