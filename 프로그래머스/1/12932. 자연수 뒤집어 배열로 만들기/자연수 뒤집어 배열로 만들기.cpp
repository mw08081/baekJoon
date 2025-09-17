#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string str = to_string(n);
    
    for(auto e : str) answer.push_back(e-'0');
    reverse(answer.begin(), answer.end());
    
    return answer;
}