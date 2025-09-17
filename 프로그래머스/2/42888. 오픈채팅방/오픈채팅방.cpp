#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<pair<string, string>> logs;
    
    unordered_map<string, string> m;

    for(const auto& e : record) {
        stringstream ss(e);
        string cmd, uid, nickname;
        ss >> cmd >> uid >> nickname;
        
        if(cmd != "Leave") 
            m[uid] = nickname;
        logs.push_back({cmd, uid});
    }
    
    for(const auto& e : logs) {
        if(e.first == "Change") continue;
        
        string res = m[e.second];
        res += "님이 ";
        if(e.first == "Enter") res += "들어왔습니다.";
        else if(e.first == "Leave") res += "나갔습니다.";
        
        answer.push_back(res);
    }
    
    return answer;
}