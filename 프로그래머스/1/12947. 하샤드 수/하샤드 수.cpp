#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int tot = 0;
    for(auto e : to_string(x)) tot += e-'0';
    return x % tot == 0;
}