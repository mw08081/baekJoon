#include <string>
#include <vector>
#include <numeric>

using namespace std;

vector<int> solution(int n, int m) {
    int t, mv = n*m;
    if(n < m) {
        t = m;
        m = n;
        n = t;
    }
    
    while(m > 0){
        t = m;
        m = n%m;
        n = t;
    }
    return {n, mv/n};
    // return {gcd(n,m), lcm(n, m)};
}