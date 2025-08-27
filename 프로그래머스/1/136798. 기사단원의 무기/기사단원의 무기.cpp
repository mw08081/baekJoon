#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int> needs(number+1);
    
    for(auto i = 1 ; i <= number; i++) 
        for(auto j = i; j <= number; j+=i)
            needs[j]++;
    
    for(auto i = 1; i <= number; i++)
        if(needs[i] > limit)
            needs[i] = power;
    
    return accumulate(needs.begin(), needs.end(), 0);
}