#include <string>
#include <vector>

using namespace std;

int dp[100001] = {0,1};

int solution(int n) {
    if(n <= 1) return n;
    
    if(dp[n] == 0) 
        dp[n] = (solution(n-1) + solution(n-2)) % 1234567;
    
    return dp[n];
}