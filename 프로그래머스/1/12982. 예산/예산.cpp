#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int i = 0;
    
    sort(d.begin(), d.end());
    
    for(i = 0; i < d.size(); i++) {
        if(budget < d[i]) break;
        else budget -= d[i];
    }
    
    return i;
}