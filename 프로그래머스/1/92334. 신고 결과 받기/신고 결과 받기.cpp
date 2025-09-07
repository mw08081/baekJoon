#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer(id_list.size(), 0);
    unordered_map<string, int> rc;            // report_count
    unordered_map<string, unordered_set<string>> rt; // report_target
    
    for(auto id : id_list) {
        rc[id] = 0;
        rt[id] = unordered_set<string>();
    }
    
    for(auto e : report) {
        auto it = find(e.begin(), e.end(), ' ');
        auto a = e.substr(0, (it - e.begin()));
        auto b = e.substr(it - e.begin() + 1, e.size()-1);
        
        auto res = rt[a].insert(b);
        if(res.second) rc[b]++;
    }
    
    for(auto i = 0; i < id_list.size(); i++) {
        for(auto t : rt[id_list[i]]) {
            if(rc[t] >= k) answer[i]++;
        }
    }
    
    return answer;
}