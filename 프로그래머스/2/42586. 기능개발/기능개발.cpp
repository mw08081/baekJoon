#include <vector>
#include <deque>

using namespace std;

vector<int> solution(vector<int> pgs, vector<int> spds) {
    vector<int> answer;
    deque<int> d_pgs;
    deque<int> d_spds;
    
    for(auto e : pgs) d_pgs.push_back(e);
    for(auto e : spds) d_spds.push_back(e);
    
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