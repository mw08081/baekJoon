#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    vector<int> walls(n, 1);
    for(auto e : section) walls[e-1] = 0;
    
    for(auto i = 0; i < n; i++)
    {
        if(walls[i] == 1) continue;
        
        answer++;
        for(auto j = 0; j < m; j++)
            // 세그먼트 오류 방지
            if(i+j < n) walls[i+j] = 1;
    }
    
    return answer;
}