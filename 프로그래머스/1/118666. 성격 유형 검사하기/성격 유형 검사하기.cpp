#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> sv, vector<int> ch) {
    string answer = "";
    unordered_map<char, int> sc {{'A',0}, {'N',0}, {'C',0}, {'F',0}, {'M',0}, {'J',0}, {'R',0}, {'T',0}};
    
    for(auto i = 0; i < sv.size(); i++){
        if(ch[i] == 4) continue;
        
        if(ch[i] < 4) {
            sc[sv[i][0]] += 4-ch[i];
        } 
        else {
            sc[sv[i][1]] += ch[i]-4;
        }
    }
    
    if(sc['R'] >= sc['T']) answer += 'R';
    else answer += 'T';
    if(sc['C'] >= sc['F']) answer += 'C';
    else answer += 'F';
    if(sc['J'] >= sc['M']) answer += 'J';
    else answer += 'M';
    if(sc['A'] >= sc['N']) answer += 'A';
    else answer += 'N';
    
    return answer;
}