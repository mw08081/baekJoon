#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
    int asnwer = 0;
    for(auto v : to_string(n)){
        asnwer += (v-48);
    }

    return asnwer;
}