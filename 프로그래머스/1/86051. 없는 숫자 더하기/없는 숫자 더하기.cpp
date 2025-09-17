#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> numbers) {
    return 45-std::accumulate(numbers.begin(), numbers.end(), 0);
}