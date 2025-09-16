#include <vector>
#include <unordered_set>
#include <numeric>
#include <algorithm>

using namespace std;

int solution(vector<int> es) {
    unordered_set<int> s;
    
    for(auto i = 0; i < es.size(); i++) {
        for(auto j = 0; j < es.size(); j++) {
            s.insert(accumulate(es.begin(), es.begin()+1+j,0));
        }
        rotate(es.begin(), es.begin()+1, es.end());
    }
    return s.size();
}