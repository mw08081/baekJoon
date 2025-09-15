#include <string>
#include <vector>

using namespace std;

long long dp[2001];

long long get(int n)
{
    if(n < 3) return dp[n];
    
    for(auto i = 3; i <= n; i++) {
        dp[i] = (dp[i-1] + dp[i-2]) % 1234567;
    }
    
    return dp[n];
}

long long solution(int n) {
    dp[1] = 1;
    dp[2] = 2;
    
    return get(n);
}