#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int year, month, day, total;
map<char, int> t_map;
vector<int> priv;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    
    // 날짜 계산
    year = stoi(today.substr(0, 4)); 
    month = stoi(today.substr(5, 2)); 
    day = stoi(today.substr(8, 2));
    total = year * 12 * 28 + (month - 1) * 28 + day;
    
    // 약관 자르기
    for(int i = 0; i < terms.size(); i++){
        stringstream ss(terms[i]);
        char alpha; int month;
        ss >> alpha >> month;
        t_map[alpha] = month;
    }
    
    // cout << t_map['A'];
    
    // 프라이버시 날짜 계산
    for(int i = 0; i < privacies.size(); i++){
        int y = stoi(privacies[i].substr(0, 4)); 
        int m = stoi(privacies[i].substr(5, 2)); 
        int d = stoi(privacies[i].substr(8, 2));
        char a = privacies[i].back();
        // cout << y << "," << m << "," << d << "," << a << endl;
        int tmp = y * 12 * 28 + (m - 1) * 28 + d + (t_map[a] * 28 - 1);
        
        priv.push_back(tmp);
    }
    
    // 비교
    for(int i = 0; i < priv.size(); i++){
        if(priv[i] < total){
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}