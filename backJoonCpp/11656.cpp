#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> ans;
    string s;
    cin >> s;
    
    for(int i = 0; i< s.length(); i++)
        ans.push_back(s.substr(i));
    sort(ans.begin(), ans.end());
    for(auto e : ans)
        cout << e << '\n';

}