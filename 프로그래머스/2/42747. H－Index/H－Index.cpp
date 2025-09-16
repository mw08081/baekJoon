#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <functional>

using namespace std;

int solution(vector<int> cs) {
    int answer = 0;
    int n = cs.size();
    
    sort(cs.begin(), cs.end(), greater<int>());
    for(auto e : cs) cout << e << " ";
    
    while(n) {
        if(cs[n-1] >= n) return n;
        n--;
    }
    return 0;
}