#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer(2,0);
    unordered_set<string> s;
    
    for(auto i = 0; i < words.size(); i++) {
        auto res = s.insert(words[i]);
        if(res.second == false || (i != 0 && words[i-1].back() != words[i].front())) {
            answer[0] = i%n+1;
            answer[1] = i/n+1;
            break;
        }
    }
    return answer;
}