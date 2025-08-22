#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int t = 0;
    for(auto i = 0; i < s.size(); i++){
        if(s[i] == ' ') t = 0;
        else {
            if(t++ & 1) {
                if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
            }else {
                if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
            }
        }
    }
    return s;
}