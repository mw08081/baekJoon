#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    for(auto i = 0; i < t.size() - p.size() + 1; i++) {
        if(stoll(t.substr(i, p.size())) <= stoll(p)) answer++;
    }
    return answer;
}