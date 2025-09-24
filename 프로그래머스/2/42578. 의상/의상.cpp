#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    unordered_map<string, int> m;
    
    for(auto e : clothes) {
        auto res = m.insert({e[1], 1});
        if(res.second == false) m[e[1]]++;
    }
    
    int answer = 1;
    for(auto e : m) 
        answer *= (e.second+1);
    
    return answer-1;
}