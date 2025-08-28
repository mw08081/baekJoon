#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    vector<int> idx(26,-1);
    
    for(auto e : keymap){
        for(auto i = 1; i <= e.size(); i++){
            if(idx[e[i-1] - 'A'] == -1) idx[e[i-1] - 'A'] = i;
            else idx[e[i-1] - 'A'] = min(idx[e[i-1] - 'A'], i);
        }
    }
        
    
    for(auto t : targets)
    {
        int tot = 0;
        for(auto e : t) {
            if(idx[e - 'A'] == -1) {
                tot = 0;
                answer.push_back(-1);
                break;
            }
            else {
                tot += idx[e - 'A'];
            }
        }
        
        if(tot != 0) answer.push_back(tot);
    }
    
    return answer;
}