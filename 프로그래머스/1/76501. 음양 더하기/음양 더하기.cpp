#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    
    for(auto i = 0; i< absolutes.size(); i++){
        answer += (signs[i] ? absolutes[i] : -1*absolutes[i]);
    }
    
    return answer;
}