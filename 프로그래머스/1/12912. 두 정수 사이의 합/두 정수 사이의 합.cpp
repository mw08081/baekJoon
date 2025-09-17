#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int s = min(a,b);
    int e = max(a,b);
    
    for(int i =s; i <= e; i++){
        answer += i;
    }
    
    return answer;
}