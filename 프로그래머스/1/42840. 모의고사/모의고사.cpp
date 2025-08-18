#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {2, 1, 2, 3, 2, 4, 2, 5};
    int c[] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int ac = 0, bc = 0, cc = 0;
    int ai = 5, bi = 8, ci = 10;
    
    for(int i = 0;i < answers.size(); i++){
        if(answers[i] == a[i%ai]) ac++;
        if(answers[i] == b[i%bi]) bc++;
        if(answers[i] == c[i%ci]) cc++;
    }
    
    int mv = max({ac,bc,cc});
    if(ac == mv) answer.push_back(1);
    if(bc == mv) answer.push_back(2);
    if(cc == mv) answer.push_back(3);
    
    return answer;
}
