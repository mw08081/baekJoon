#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


bool isPrime(long long num) {
    if (num < 2) return false;
    for (long long i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int solution(int n, int k) {
    int answer = 0;
    
    vector<char> v;
    vector<int> zPos;
    while(n != 0) {
        v.push_back((n % k) + '0');
        n /= k;
    }
    
    reverse(v.begin(), v.end());
    for(auto i = 0; i < v.size(); i++){
        if(v[i] == '0') zPos.push_back(i);
    }
    
    for(auto e : v) cout << e;    
    cout << '\n';

    if(zPos.size() == 0) {
        long long ll = stoll(string(v.begin(), v.end()));
        if(isPrime(ll)) answer++;
        
    } else if(zPos.size() == 1) {
        long long n1 = stoll(string(v.begin(), v.begin() + zPos[0]));
        
        if(isPrime(n1)) answer++;
        if(zPos[0] != v.size()-1){
            long long n2 = stoll(string(v.begin() + zPos[0] + 1, v.end()));
            if(isPrime(n2)) answer++;
        } 
    } else {
        //zPos.size() >= 2
        long long n1 = stoll(string(v.begin(), v.begin() + zPos[0]));
        // if(isPrime(n1)) answer++;
                
        cout << "n1 : " << n1 << " ";
        if(isPrime(n1)) {
            answer++;
            cout << "0\n";
        } else {
            cout << "x\n";
        }
        
        if(zPos[zPos.size()-1]!= v.size()-1){
            long long nn = stoll(string(v.begin() + zPos[zPos.size()-1]+1, v.end()));
            
            cout << "nn : " << nn << " ";
            if(isPrime(nn)){
                answer++;
                cout << "0\n";
            } else {
                cout << "x\n";
            }
        }
        
        for(auto i = 0; i < zPos.size()-1; i++) {
            if(zPos[i] + 1 == zPos[i+1]) continue;
            string s = string(v.begin() + zPos[i]+1, v.begin() + zPos[i+1]);
            long long t = stoll(s);
            
            if(isPrime(t)) {
                cout << t << '\n';
                answer++;
            }
        }
    }
    return answer;
}