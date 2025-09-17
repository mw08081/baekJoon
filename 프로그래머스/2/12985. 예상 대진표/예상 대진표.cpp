#include <iostream>
#include <vector>

using namespace std;

int solution(int n, int a, int b)
{
    vector<int> arr;
    int answer = 0;
    
    for(auto i = 1; i <= n; i++) arr.push_back(i);
    
    while(!arr.empty()){
        answer++;
        
        vector<int> t;
        for(auto i = 0; i < arr.size() - 1; i+=2){
            if(arr[i] == a && arr[i+1] == b || arr[i] == b && arr[i+1] == a){
                return answer;        
            }
            else if(arr[i] == a || arr[i+1] == a){
                t.push_back(a);
            }
            else if(arr[i+1] == b || arr[i] == b){
                t.push_back(b);
            }
            else {
                t.push_back(arr[i]);
            }
        }
        arr.clear();
        arr = t;
    }

    return answer;
}