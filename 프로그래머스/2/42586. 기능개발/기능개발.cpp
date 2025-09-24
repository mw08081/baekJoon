#include <vector>
#include <deque>

using namespace std;

vector<int> solution(vector<int> pgs, vector<int> spds) {
    vector<int> answer;
    deque<int> d_pgs(pgs.begin(), pgs.end());
    deque<int> d_spds(spds.begin(), spds.end());
        
    while(!d_pgs.empty()) {        
        int popCnt = 0;
        while(!d_pgs.empty() && d_pgs.front() >= 100) {
            popCnt++;
            d_pgs.pop_front();
            d_spds.pop_front();
        }
        
        if(popCnt != 0) answer.push_back(popCnt);
        
        for(auto i = 0; i < d_pgs.size(); i++) 
            d_pgs[i] += d_spds[i];
    }
    
    return answer;
}