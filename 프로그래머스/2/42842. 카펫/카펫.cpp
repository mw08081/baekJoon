#include <string>
#include <vector>

using namespace std;

vector<int> solution(int b, int y) {
    
    vector<pair<int, int>> arr;
    for(auto i = 3; i*i <= (b+y); i++) 
        if((b+y) % i == 0) arr.push_back({i, (b+y)/i});
    
    for(auto e : arr){
        int bb = b, yy = y;
        for(auto i = 0; i < e.first; i++) {
            for(auto j = 0; j < e.second; j++) {
                if(i == 0 || i == e.first - 1 || j == 0 || j == e.second - 1) {
                    if(bb < 1) break;
                    bb--;
                }
                else {
                    if(yy < 1) break;
                    yy--;
                }
            }
        }
        if(yy == 0 && bb == 0) return {e.second, e.first};
    }
    return {-1, -1};
}