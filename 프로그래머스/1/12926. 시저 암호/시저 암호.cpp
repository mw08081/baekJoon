#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    char st = 'A';
    for(auto i = 0; i < s.size(); i++){
        if(s[i] != ' '){
            st = s[i] < 91 ? 'A' : 'a';
            s[i] = st + (s[i] - st + n) % 26;
        }
    }
    return s;
}