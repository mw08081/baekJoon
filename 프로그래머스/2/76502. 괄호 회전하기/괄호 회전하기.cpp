#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    int n = s.size();
    
    
    for(auto i = 0; i < n; i++) {
        string t = "";
        
        for(auto e: s) {
            if(e == '[' || e == '(' || e == '{') 
                t.push_back(e);
            else 
                if(t.back() == '[' && e == ']' || t.back() == '{' && e == '}' || t.back() == '(' && e == ')') 
                    t.pop_back();
                else 
                    t.push_back(e);
        }
        if(t.empty()) answer++;
        
        rotate(s.begin(), s.begin()+1, s.end());
    }
    return answer;
}