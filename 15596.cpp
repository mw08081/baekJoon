#include <iostream>
#include <vector>

using namespace std;

long long sum(std::vector<int> &a)
{
    long long anw = 0;
    for(std::vector<int>::iterator it = a.begin(); it < a.end(); it++)
        anw += *it;
    
    return anw;
}