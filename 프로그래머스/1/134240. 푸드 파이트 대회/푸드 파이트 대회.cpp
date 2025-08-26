#include <string>
#include <vector>
#include <list>

using namespace std;

string solution(vector<int> food) {
    list<char> lst = {'0'};
    for(int i = food.size() - 1; i > 0; i--) {
        for(auto c = 0; c < food[i] / 2; c++) {
            lst.push_back(i + '0');
            lst.push_front(i + '0');
        }
    }
    
    return string(lst.begin(), lst.end());
}