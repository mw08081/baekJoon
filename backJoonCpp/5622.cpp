#include <iostream>
using namespace std;

int main()
{
    int res = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
        res += ("22233344455566677778889999"[s[i] - 'A'] - '0' + 1);
    

    // for (int i = 0; i < s.length(); i++)
    // {
    //    res += ((s[i] - 'A') / 3 + 2 + 1);
    //    if(s[i] == 'S' || s[i] == 'V' || s[i] >= 'Y') res--;
    // }
        
    cout << res;
}