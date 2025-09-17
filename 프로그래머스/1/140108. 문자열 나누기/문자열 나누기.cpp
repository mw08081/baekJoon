#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    char stdd = '0';
    int stddCnt = 0, otherCnt = 0;
    for(auto i = 0;  i < s.size(); i++)
    {
        if(stdd == '0')
        {
            stdd = s[i];
            stddCnt++;
        } 
        else if(s[i] == stdd)
            stddCnt++;
        else
            otherCnt++;
        
        if(stddCnt == otherCnt){
            answer++;
            stdd = '0';
            stddCnt = 0;
            otherCnt = 0;
        }
    }
    
    if(stdd == '0') return answer;
    else return answer+1;
}