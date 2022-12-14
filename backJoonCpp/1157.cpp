#include <iostream>
using namespace std;

int cnt[26];

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            cnt[s[i] - 'A']++;
        else if(s[i] >= 'a' && s[i] <= 'z')
            cnt[s[i] - 'a']++;
    }

    int max = 0, idx;
    for (int i = 0; i < 26; i++)
    {
        if(cnt[i] > max)
        {
            max = cnt[i];
            idx = i;
        }
        else if(cnt[i] == max)
        {
            idx = -1;
        }
    }

    if(idx == -1)
        cout << '?' << '\n';
    else
        cout << (char)(idx + 'A') << '\n';
}