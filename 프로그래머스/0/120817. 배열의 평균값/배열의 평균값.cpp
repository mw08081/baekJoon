#include <vector>
#include <numeric>

using namespace std;

double solution(vector<int> numbers) {
    return accumulate(numbers.begin(), numbers.end(), 0) / (float)numbers.size();
}