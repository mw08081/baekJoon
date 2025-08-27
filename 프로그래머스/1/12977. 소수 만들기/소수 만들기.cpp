#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;

    int isComposite[3001] = {1, 1};
    for(auto i = 2; i*i < 3001; i++)
    {
        if(isComposite[i]) continue;
        
        for(auto j = i*i; j < 3001; j+=i)
            isComposite[j] = true;
    }
    
    
    for(auto i = 0; i < nums.size()-2; i++)
        for(auto j = i+1; j < nums.size()-1;j++)
            for( auto k = j+1; k < nums.size(); k++)
                if(isComposite[nums[i]+nums[j]+nums[k]] == false) answer++;
       
    return answer;
}