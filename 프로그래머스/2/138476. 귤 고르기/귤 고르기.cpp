#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    unordered_map<int, int> m;
    for(auto i = 1; i < 10000001; i++) m[i] = 0;
    for(auto e : tangerine) m[e]++;
    
    vector<pair<int, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    });
    
    int tot = 0, answer = 0;
    for(auto e : v) {
        
        tot += e.second;
        
        if(tot >= k) return answer+1;
        else answer++;
    }
    return -1;
}