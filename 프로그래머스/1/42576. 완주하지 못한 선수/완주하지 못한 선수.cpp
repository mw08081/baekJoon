#include <string>
#include <vector>

#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    std::unordered_map<std::string, int> map;
    
    for(auto c : completion)
    {
        auto it = map.find(c);
        if(it != map.end()) it->second += 1;
        else map[c] = 1;
    }
    
    for(auto p : participant)
    {
        auto it = map.find(p);
        if(it != map.end()){
            if(it->second > 0) it->second -= 1;
            else return p;
        }
        else return p;
    }
}