#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wp) {
    int lux=51, luy=51, rdx=-1, rdy=-1;
    
    for(auto i = 0; i < wp.size(); i++){
        for(auto j = 0; j < wp[i].size(); j++){
            if(wp[i][j] == '#' ){                
                if(lux > i) lux = i;
                if(luy > j) luy = j;
                if(rdx < i) rdx = i;
                if(rdy < j) rdy = j;
            }
        }
    } 
    return {lux, luy, rdx+1, rdy+1};
}