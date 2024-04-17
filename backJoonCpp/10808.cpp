#include <iostream>
using namespace std;

int main()
{
    int r[26] = {0};
    string s;
    cin >> s;
    for(auto c : s)
        r[c - 97]++;
        
    for(auto e : r)
        cout << e << " ";
}