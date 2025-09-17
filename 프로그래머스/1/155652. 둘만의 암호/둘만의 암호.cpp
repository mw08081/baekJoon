#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    vector<char> skips(26,0);
    
    for(auto c : skip) skips[c-'a'] = 1;
    
    for(auto c : s)
    {
        int i = 0, step = 1, next;
        while(true)
        {
            next = (c - 'a' + step) % 26;
            if(skips[next] == 0) i++;
            
            if(i >= index) break;
            else step++;
        }
        answer += (c - 'a' + step) % 26 + 'a';
    }
    
    return answer;
}