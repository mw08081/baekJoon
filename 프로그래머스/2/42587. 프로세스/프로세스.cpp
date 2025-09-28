#include <string>
#include <vector>
#include <numeric>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 1;
    queue<pair<int,int>> q;
    vector<int> pCnt(10, 0);
    
    int i = 0;
    for(auto e : priorities) {
        q.push(make_pair(i++, e));
        pCnt[e]++;
    }
    
    while(!q.empty()) {
        auto p = q.front().second;
        
        // 우선순위가 더 높은 요소가 아직있음
        if(accumulate(pCnt.begin() + (p+1), pCnt.end(), 0) > 0) {
            q.push(q.front());
            q.pop();
        } else { // 우선순위가 높은 요소가 없음
            // 그리고 앞에 놓인 프로세스가 원하는 프로세스일때
            if(q.front().first == location){
                return answer;  
            } 
            else { // 아닐때,
                pCnt[p]--;
                answer++;
                q.pop();
            }
        }
    }
    return answer;
}
