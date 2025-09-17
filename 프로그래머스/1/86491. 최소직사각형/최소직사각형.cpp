#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int w = 0, h = 0;
    for(auto c: sizes){
        w = max(w, max(c[0], c[1]));
        h = max(h, min(c[0], c[1]));
    }
    return w*h;
}