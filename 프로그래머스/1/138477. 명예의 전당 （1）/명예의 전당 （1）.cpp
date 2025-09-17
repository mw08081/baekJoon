#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

using namespace std;

vector<int> solution(int k, vector<int> sc) {
    vector<int> answer;
    
    for(auto i = 0; i < sc.size(); i++) {
        sort(sc.begin(), sc.begin()+i+1, greater<int>());
        
        if(i >= k) answer.push_back(sc[k-1]);
        else answer.push_back(*(sc.begin() + i));
    }
    return answer;
}