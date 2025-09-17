#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> a(n, 1);
    for(auto e : lost) a[e-1]--;
    for(auto e : reserve) a[e-1]++;
    
    for(auto i = 0; i < n+1; i++){
        if(a[i] == 0) {
            if(i > 0 && a[i-1] > 1) {
                a[i-1]--;
                a[i]++;
            } else if(i < n-1 && a[i+1] > 1){
                a[i+1]--;
                a[i]++;
            }
        }
    }
    return n - count(a.begin(), a.end(), 0);
}