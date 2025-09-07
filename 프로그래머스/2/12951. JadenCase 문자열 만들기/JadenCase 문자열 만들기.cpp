#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    if(s[0] >= 'a' && s[0] <= 'z') s[0] = s[0] - 'a' + 'A';
    
    for(auto i = 1; i < s.size(); i++){
        if(s[i] == ' ' && s[i+1] >= 'a' && s[i+1] <= 'z') {
            s[i+1] = s[i+1] - 'a' + 'A';
        } 
        else if(s[i-1] != ' ' && s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] - 'A' + 'a';
        }
    }
    return s;
}