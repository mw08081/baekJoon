#include <string>
#include <vector>

using namespace std;

int answer;

/// t: target, s: sum, l: level
void dfs(vector<int> nums, int t, int l, int s) {
    // 끝에 도달한 경우
    if(l >= nums.size()) {
        if(s == t) answer++;
        return;
    }
    
    dfs(nums, t, l+1, s+nums[l]);
    dfs(nums, t, l+1, s-nums[l]);
}

int solution(vector<int> nums, int t) {
    dfs(nums, t, 0, 0);
    
    return answer;
}