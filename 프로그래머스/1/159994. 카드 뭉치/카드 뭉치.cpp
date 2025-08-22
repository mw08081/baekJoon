#include <string>
#include <vector>
#include <queue>
using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    queue<string> c1;
    queue<string> c2;
    for(auto e : cards1) c1.push(e);
    for(auto e : cards2) c2.push(e);
    
    for(auto i = 0; i < goal.size(); i++) {
        if(c1.front() == goal[i]) c1.pop();
        else if(c2.front() == goal[i]) c2.pop();
        else return "No";
    }
    return "Yes";
}