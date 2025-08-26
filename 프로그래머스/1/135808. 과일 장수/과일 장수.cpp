#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int solution(int k, int m, vector<int> sc) {
    int answer = 0;
    
    sort(sc.begin(), sc.end(), greater<int>());
    for(auto i = 0; i < sc.size() / m; i++) answer += sc[m * (i+1) - 1] * m;
    
    return answer;
}