#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    int li = left / n, lj = left % n;
    int ri = right / n, rj = right % n;
    vector<int> answer((ri - li + 1) * n, 0);
    
    for(auto i = 0; i < ri - li + 1; i++) {
        for(auto j = 0; j < n; j++) {
            if(li + i < j) 
                answer[i*n + j] = j+1;
            else
                answer[i*n + j] = li+i+1;  
        }
    }
    
    return vector(answer.begin()+lj, answer.end()-(n-rj-1));
}