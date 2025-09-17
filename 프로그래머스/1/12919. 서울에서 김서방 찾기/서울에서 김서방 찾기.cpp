#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
    auto it = find(seoul.begin(), seoul.end(), "Kim");
    return "김서방은 " + to_string(it - seoul.begin()) + "에 있다";
}