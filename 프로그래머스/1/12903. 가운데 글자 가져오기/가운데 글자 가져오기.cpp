#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s) {
    return (s.size() % 2 == 0)?(s.substr(s.size()/2 - 1,2)):(s.substr(s.size()/2,1));
}