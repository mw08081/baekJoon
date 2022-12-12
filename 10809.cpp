#include <iostream>
#include <string>
using namespace std;

int main()
{
    int idx[26];
    fill_n(idx, 26, -1);
    
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
        if(idx[s[i] - 'a'] == -1)
            idx[s[i] - 'a'] = i;
    
    for (int i = 0; i < 26; i++)
        cout << idx[i] << " ";
    
    
}