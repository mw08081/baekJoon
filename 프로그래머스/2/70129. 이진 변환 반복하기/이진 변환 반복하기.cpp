#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <functional>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer = {0,0};
    
    int cnt = 0, t;
    while(s != "1"){
        answer[0]++;
        
        sort(s.begin(), s.end(), greater<char>());
        answer[1] += count(s.begin(), s.end(), '0');
        s.erase(find(s.begin(), s.end(), '0'), s.end());
        
        t = s.size();
        s = "";
        while(t != 0){
            s += to_string(t % 2);
            t /= 2;
        }
        
        cout << s << '\n';
    }
    return answer;
}