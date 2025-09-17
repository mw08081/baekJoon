#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int n, vector<vector<int>> cps) {
    int answer = n;
    
    
    vector<int> lst[n+1];
    vector<bool> v(n+1, false);
    
    // 인접리스트 생성
    for(auto i = 1; i < cps.size(); i++) {
        for(auto j = 0; j < i; j++) {
            if(cps[i][j] == 1) {
                lst[i+1].push_back(j+1);
                lst[j+1].push_back(i+1);
            }
        }
    }
    
    // 각 노드별로 순회하면서 
    for(auto i = 1; i <= n; i++) {
        // 해당 노드가 어떤 네트워크에 한번이라도 들었다면 네트워크 수 감소 
        // 예를들어 3개의 노드중 1,2가 하나의 네트워크라면 
        if(v[i] == true) {
            answer--;
        }
        else {
            queue<int> bfs;

            v[i] = true;
            bfs.push(i);
            while(!bfs.empty()) {
                v[bfs.front()] = true;

                for(auto e : lst[bfs.front()]) {
                    if(v[e] == false) bfs.push(e);
                }

                bfs.pop();    
            }    
        }
    }
    
    return answer;
}