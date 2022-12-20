#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt = s.length();

    for (int i = 0; i < s.length(); i++)
        if(((s[i] == 'l'|| s[i] == 'n') && s[i + 1] == 'j') ||
            (s[i] == '=' || s[i] == '-') ||
            (s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '='))
            cnt--; 
    cout << cnt;
}