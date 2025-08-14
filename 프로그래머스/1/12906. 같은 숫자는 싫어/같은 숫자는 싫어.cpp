#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    for(auto v : arr) if(answer.empty() || v != answer.back()) answer.push_back(v);
        
    return answer;
}