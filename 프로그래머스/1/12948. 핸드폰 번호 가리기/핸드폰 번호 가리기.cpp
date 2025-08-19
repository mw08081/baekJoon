#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int maskingIdx = phone_number.size() - 4;
    for(auto i = 0; i < phone_number.size(); i++){
        if(i < maskingIdx) answer += '*';
        else answer += phone_number[i];
    }
    return answer;
}