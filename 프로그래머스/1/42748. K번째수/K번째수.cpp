#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(auto v : commands){
        vector<int> t;
        for(auto i = v[0]-1; i < v[1]; i++) t.push_back(array[i]);
        sort(t.begin(), t.end());
        answer.push_back(t[v[2]-1]);
    }
    return answer;
}