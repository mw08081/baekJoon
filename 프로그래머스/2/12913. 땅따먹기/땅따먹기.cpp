#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int> > land)
{
    vector<vector<int>> dp(land.size(), vector<int>(4));
    
    for(auto j = 0; j < 4; j++) 
        dp[0][j] = land[0][j];
    
    for(auto i = 1; i < land.size(); i++) {
        for(auto j = 0; j < 4; j++) {
            int max = 0;
            for(auto k = 0; k < 4; k++) {
                if(j == k) continue;
                
                if(dp[i-1][k] + land[i][j] > max) 
                    max = dp[i-1][k] + land[i][j];
            }
            dp[i][j] = max;
        }
    }

    return *max_element(dp[land.size()-1].begin(), dp[land.size()-1].end());
}