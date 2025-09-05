#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<string> solution(vector<string> ps, vector<string> cs) {
    unordered_map<string, int> m;
    for(auto i = 0; i < ps.size(); i++) m[ps[i]] = i;
    
    for(auto c : cs) {
        int idx = m[c];
        
        string temp = ps[idx];
        ps[idx] = ps[idx-1];
        ps[idx-1] = temp;
        
        m[ps[idx-1]] = idx-1;
        m[ps[idx]] = idx;
    }
    
    return ps;
}