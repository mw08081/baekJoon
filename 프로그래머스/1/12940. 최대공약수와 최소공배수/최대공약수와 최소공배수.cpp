#include <string>
#include <vector>
#include <numeric>

using namespace std;

vector<int> solution(int n, int m) {
    return {gcd(n,m), lcm(n, m)};
}