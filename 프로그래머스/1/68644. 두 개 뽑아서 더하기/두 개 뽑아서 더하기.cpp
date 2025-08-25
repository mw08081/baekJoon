#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> n) {
    vector<int> answer;
    for(auto i = 0; i < n.size() - 1; i++){
        for(auto j = i + 1; j < n.size(); j++) {
            answer.push_back(n[i]+n[j]);
        }
    }
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    return answer;
}