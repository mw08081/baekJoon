#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(vector<int> numbers) {
    string answer = "";
    
    sort(numbers.begin(), numbers.end(), [](const int& a, const int& b){
        string sa = to_string(a);
        string sb = to_string(b);    
        
        if(sa[0] == sb[0]) return stoi(sa+sb) > stoi(sb+sa);
        else return sa[0] > sb[0];
    });
    
    for(auto e : numbers) answer += to_string(e);
    if(answer == string(answer.length(), '0')) return "0";
    
    return answer;
}