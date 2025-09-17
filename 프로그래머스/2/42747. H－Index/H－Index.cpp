#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int solution(vector<int> cs) {
    int n = cs.size();
    
    sort(cs.begin(), cs.end(), greater<int>());
    while(n) {
        if(cs[n-1] >= n) return n;
        n--;
    }
    return 0;
}