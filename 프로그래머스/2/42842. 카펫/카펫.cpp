#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int b, int y) {
    
    // 48
    // 1 48 x(under 3)
    // 2 24 x(under 3)
    // 3 16
    // 4 12
    // 6 8
    
    vector<pair<int, int>> arr;
    for(auto i = 3; i*i <= (b+y); i++) 
        if((b+y) % i == 0) arr.push_back({i, (b+y)/i});
    
    for(auto e : arr){
        int bb = b, yy = y;
        cout << e.first << " " << e.second << " 에 대해서 탐색을 시작\n";
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
        
        cout << "결과: " << yy << " " << bb << '\n';
        if(yy == 0 && bb == 0) return {e.second, e.first};
    }
    
    return {-1, -1};
}