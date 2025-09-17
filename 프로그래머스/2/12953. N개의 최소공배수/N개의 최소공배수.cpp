#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(vector<int> arr) {
    int answer = 1;
    vector<int> max(101, 0);
    vector<bool> isPrime(101, true);
    isPrime[0] = false;
    isPrime[1] = true;
    
    for(auto i = 2; i*i <= 100; i++) {
        if(isPrime[i] == false) continue;
        
        for(auto j = i*i; j <= 100; j+=i) 
            isPrime[j] = false;    
    }
    
    for(auto e : arr) {
        for(auto i = 2; i < 101; i++) {
            if(isPrime[i] == false) continue;
            
            int cnt = 0;
            while(e % i == 0) {
                e /= i;
                cnt++;
            }
            
            if(max[i] < cnt) max[i] = cnt;
        }
    }
    
    for(auto i = 2; i < 101; i++) {
        if(max[i] != 0) {
            answer *= pow(i, max[i]);
        }
    }
        
    return answer;
}