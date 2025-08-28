#include <string>
#include <vector>
#include <regex>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    vector<char> t;
    int xArr[10] = {0};
    int yArr[10] = {0};
    
    for(auto e : X) xArr[e - '0']++;
    for(auto e : Y) yArr[e - '0']++;
    
    for(auto i = 9; i >= 0; i--)
        if(xArr[i] > 0 && yArr[i] > 0)
            for(auto j = 0; j < min(xArr[i], yArr[i]); j++)
                answer += to_string(i);
    
    if(answer.empty()) return "-1";
    else if(std::regex_match(answer, std::regex("0*"))) return "0";
    return answer;
}
