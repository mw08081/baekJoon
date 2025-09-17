#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int max_depth;

void bt(int k, vector<pair<int, int>> dgs, int depth)
{
    if(dgs.size() == 0) {
        // cout << "더 이상 탐험가능한 던전이 없습니다.(현재 깊이: " << depth << ")\n";
        if(max_depth < depth) max_depth = depth;
        return;
    } else {
        // cout << "현재 피로도: " << k << " ";
        // for(auto e : dgs) {
        //     cout << "[" << e.first << ", " << e.second << "]  --  ";
        // }
        // cout << '\n';
    }
    
    vector<int> after_dgs_cnt(dgs.size(), 0);
    // 각 던젼을 돌았을 경우, 이후 피로도로 돌 수 있는 던전의 개수만 확인
    for(auto i = 0; i < dgs.size(); i++) {
        // 던전 진입조차 안된다면 continue
        if(dgs[i].first > k) continue;
        
        int cnt = 0;
        for(auto j = 0; j < dgs.size(); j++) {
            if (i != j && k - dgs[i].second >= dgs[j].first) cnt++;
        }
        after_dgs_cnt[i] = cnt;
    }
    
    // 이후 탐험가능 던전수 확인
    // for(auto e : after_dgs_cnt) cout << e << " ";
    // cout << '\n';
    
    for(auto i = 0; i < dgs.size(); i++) {
        // 이후 탐험 가능 던전수가 max인 던전만을 탐험(유망필터)
        if(
           after_dgs_cnt[i] != *max_element(after_dgs_cnt.begin(), after_dgs_cnt.end()) ) continue;
        
        vector<pair<int, int>> next_dgs;
        for(auto j = 0; j < dgs.size(); j++) {
            if (i != j && k - dgs[i].second >= dgs[j].first) next_dgs.push_back(dgs[j]);
        }
        
        // cout << "[" << dgs[i].first << ", " << dgs[i].second << "] 던전에 들어갑니다.\n";
        bt(k - dgs[i].second, next_dgs, depth+1);
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    int answer = 0;
    
    vector<pair<int, int>> dgs;
    for(auto v : dungeons)
        dgs.push_back({v[0], v[1]});
    
    // for(auto e : dgs)
    //     cout << e.first << " " << e.second << '\n';
    bt(k, dgs, 0);
    return max_depth;
}