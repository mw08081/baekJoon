#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<string> b) {
    int answer = 0;
    
    for(auto e : b)
    {
        vector<string> bs;
        int i;
        for(i = 0; i < e.size() - 1; )
        {
            if(i < e.size() - 2)
            {
                // 3글자 비교
                if(e.substr(i, 3) == "aya" || e.substr(i, 3) == "woo") {
                    bs.push_back(e.substr(i,3));
                    i+=3;
                }
                else if(e.substr(i, 2) == "ye" || e.substr(i,2) == "ma") {
                    bs.push_back(e.substr(i,2));
                    i+=2;
                }
                else break;
            }
            else { 
            
                // 2글자 비교
                if(e.substr(i, 2) == "ye" || e.substr(i,2) == "ma") {
                    bs.push_back(e.substr(i,2));
                    i+=2;
                }
                else break;
            }
        }
        
        int tLen = bs.size();
        bs.erase(unique(bs.begin(), bs.end()), bs.end());
        if(i == e.size() && tLen == bs.size()) answer++;
    }
    return answer;
}