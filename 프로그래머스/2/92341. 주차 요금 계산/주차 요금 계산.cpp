#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>

using namespace std;

int getDuration(string in_t, string out_t) {
    int ith = stoi(in_t.substr(0,2));
    int itm = stoi(in_t.substr(3,2));
    int oth = stoi(out_t.substr(0,2));
    int otm = stoi(out_t.substr(3,2));

    // otm - itm
    if(otm < itm) {
        oth--;
        otm += 60;
    }

    return (oth - ith)*60 + (otm - itm);
}

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<string, int> db; // database: 차량번호-누적시간
    map<string, string> it; // cur in time: 차량번호-입차시간
    
    for(auto l : records) {
        stringstream ss(l);
        string time, num, io;
        
        ss >> time >> num >> io;
        
        if(io == "IN") {
            it[num] = time;
        } else {
            // db 추가(안됨말고)
            db.insert({num, 0});
            // 시간 누적
            db[num] += getDuration(it[num], time); 
            // 입차시간 제거
            it.erase(num);
        }
    }
    
    for(auto e : it) {        
        // db 추가(안됨말고)
        db.insert({e.first, 0});
        // 요금부과
        db[e.first] += getDuration(it[e.first], "23:59");
        // 입차시간 제거
        it.erase(e.first);
    }
    
    for(auto e : db){
        if(e.second > fees[0]) {
            answer.push_back(fees[1] + ceil((e.second - fees[0]) / (float)fees[2]) * fees[3]);
        } else {
            answer.push_back(fees[1]);
        }
    }
    
    return answer;
}