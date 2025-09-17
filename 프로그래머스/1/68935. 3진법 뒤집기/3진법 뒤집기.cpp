#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    vector<int> c;
    int answer = 0;
    
    while(n > 0){
        c.push_back(n % 3);
        n /=3;
    }
    
    int cnt = 0;
    while(!c.empty()){
        answer += (pow(3,cnt++) * c.back());
        c.pop_back();
    }
    return answer;
}