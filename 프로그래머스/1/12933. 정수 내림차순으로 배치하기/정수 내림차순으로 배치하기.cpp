#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string t = to_string(n);
    sort(t.begin(), t.end(), [](const char& a, const char& b) {return a > b;});
    
    return stoll(t);
}