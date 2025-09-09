#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    int n = maps.size();
    int m = maps[0].size();
    
    vector<vector<int>> steps(n, vector<int>(m, 0));
    queue<pair<int, int>> bfs;
    
    steps[0][0] = 1;
    bfs.push({0,0});
    while(!bfs.empty()) {
        int x = bfs.front().first;
        int y = bfs.front().second;
        
        for(auto i = 0; i < 4; i++) {
            // 범위초과 제외 
            if(x + dx[i] < 0 || x + dx[i] >= n || y + dy[i] < 0 || y + dy[i] >= m) continue;
            // 벽 제외
            if(maps[x + dx[i]][y + dy[i]] == 0) continue;
            
            if(steps[x + dx[i]][y + dy[i]] == 0) {
                steps[x + dx[i]][y + dy[i]] = steps[x][y] + 1;
                bfs.push({x + dx[i], y + dy[i]});
            }
        }
        bfs.pop();
    }
    
    return steps[n-1][m-1] == 0 ? -1 : steps[n-1][m-1];
}