#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> park, vector<string> rts) {
    int xl = park.size() - 1;
    int yl = park[0].size() - 1;
    
    int x, y;
    for(auto i = 0; i < park.size(); i++){
        auto it = find(park[i].begin(), park[i].end(), 'S');
        if(it != park[i].end()){
            x = i;
            y = it - park[i].begin();
            
            break;
        }
    }
    
    for(auto rt : rts) {
        char op = rt[0];
        int n = rt[2] - '0';
        int cx = x, cy = y;
        
        switch(op) {
            case 'N':
                if(x < n) break;
                for(auto i = 0; i < n; i++) {
                    if(park[--x][y] == 'X') {
                        x = cx;
                        y = cy;
                        break;
                    }
                }
                break;
            case 'S':
                if(x + n > xl) break;
                for(auto i = 0; i < n; i++){
                    if(park[++x][y] == 'X'){
                        x = cx;
                        y = cy;
                        break;
                    }
                }
                break;
            case 'W':
                if(y < n) break;
                for(auto i = 0; i < n; i++){
                    if(park[x][--y] == 'X'){
                        x = cx;
                        y = cy;
                        break;
                    }
                }
                break;
            case 'E':
                if(y + n > yl) break;
                for(auto i = 0; i < n; i++) {
                    if(park[x][++y] == 'X') {
                        x = cx;
                        y = cy;
                        break;
                    }
                }
                break;
        }
    }
    return {x,y};
}