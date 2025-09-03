#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> ig) {
    if(ig.size() < 4) return 0;
    
    vector<int> s= {ig[0], ig[1], ig[2]};
    int answer = 0;
    for(auto i = 3; i < ig.size(); i++)
    {
        s.push_back(ig[i]);
        if(*(s.end()-1) == 1 && *(s.end()-2) == 3 && *(s.end()-3) == 2 && *(s.end()-4) == 1){
            for(auto j = 0; j < 4; j++) s.pop_back();
            answer++;
        }
    }
    
    return answer;
}