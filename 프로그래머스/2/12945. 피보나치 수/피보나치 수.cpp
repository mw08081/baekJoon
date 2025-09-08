#include <string>
#include <vector>

using namespace std;

int dp[100001] = {0,1};

int solution(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    
    if(dp[n] == 0) {
        dp[n] = (solution(n-1) + solution(n-2)) % 1234567;
        return dp[n];
    } else {
        return dp[n];
    }
}