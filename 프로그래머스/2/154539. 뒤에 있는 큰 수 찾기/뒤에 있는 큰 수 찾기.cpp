#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    stack<int> s;
    
    for(int i = numbers.size() -1; i >= 0; --i) 
    {
        while(!s.empty() && numbers[i] >= s.top()) s.pop();
        
        if(s.empty()) answer.push_back(-1);
        else answer.push_back(s.top());
        
        s.push(numbers[i]);
    }
    
    reverse(answer.begin(),answer.end());

    return answer;
}