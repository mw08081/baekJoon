#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    int stdIdx = 0;
    vector<long long> vec;
    
    for(auto i = 0; i < s.size(); i++) {
        if(s[i] == ' '){
            auto v = s.substr(stdIdx, i-stdIdx+1);
            auto numV = stoll(v);
            
            vec.push_back(numV);
            stdIdx = i+1;
        }
    }
    vec.push_back(stoll(s.substr(stdIdx, s.size()-1)));

    
    auto res = minmax_element(vec.begin(),vec.end());
    return to_string(*res.first) + " " + to_string(*res.second);
}