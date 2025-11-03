#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string word) {
    string chs[5] = {"A", "E", "I", "O", "U"};
    vector<string> v;
    
    for(int a = 0; a < 5; a++) {
        v.push_back(chs[a]);
        for(int b = 0; b < 5; b++) {
            v.push_back(chs[a] + chs[b]);
            for(int c = 0; c < 5; c++) {
                v.push_back(chs[a] + chs[b] + chs[c]);
                for(int d = 0; d < 5; d++) {
                    v.push_back(chs[a] + chs[b] + chs[c] + chs[d]);
                    for(int e = 0; e < 5; e++) {
                        v.push_back(chs[a] + chs[b] + chs[c] + chs[d] + chs[e]);
                    }
                }
            }
        }
    }
    
    int answer = 0;
    for(auto e : v) {
        if(e == word) break;
        else answer++;
    }
    
    
    return answer+1;
}
