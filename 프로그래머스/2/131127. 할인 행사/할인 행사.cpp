#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;

    unordered_map<string, int> m;
    for(auto i = 0; i < want.size(); i++) 
        m[want[i]] = number[i];
    
    for(auto i = 0; i < discount.size() - 9; i++) {
        unordered_map<string, int> dc;
        for(auto j = 0; j < 10; j++) {
            
            auto res = dc.insert({discount[i + j], 1});
            if(res.second == false) dc[discount[i + j]]++;
        }
        
        bool hit = true;
        for(auto e : m) {
            auto it = dc.find(e.first);
            
            if(it == dc.end()) {
                hit = false;
                break;
            }
            
            // want value != dc value
            if(e.second != dc[e.first]) {
                hit = false;
                break;
            }
        }
        
        if(hit) answer++;
    }
    
    return answer;
}