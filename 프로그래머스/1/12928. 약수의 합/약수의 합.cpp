#include <string>
#include <vector>

#include <iostream>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(auto i = 1; i <= n; i++)
        if(n % i == 0) answer+=i;
    
    return answer;
}