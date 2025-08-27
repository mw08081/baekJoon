#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> arr(46, 0);
    int zeroCnt = count(lottos.begin(), lottos.end(), 0);
    int hitCnt = 0;
    
    // 정답조사
    for(auto e : win_nums) arr[e] = 1;
    
    // 정답 일치 확인
    for(auto e : lottos){
        if(arr[e] == 1) hitCnt++;
    }
    
    return {min(7-hitCnt-zeroCnt, 6), min(7-hitCnt,6)} ;
}