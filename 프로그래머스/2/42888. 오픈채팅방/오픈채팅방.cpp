#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <iostream>

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
        
        string action;
        if(e.first == "Enter") action = "들어왔습니다.";
        else if(e.first == "Leave") action = "나갔습니다.";
        
        answer.push_back(m[e.second] + "님이 " + action);
    }
    
    return answer;
}