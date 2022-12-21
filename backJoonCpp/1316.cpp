#include <iostream>
#include <vector>
using namespace std;

bool GetIsRedundant(vector<char> &log, char _c)
{
    for(vector<char>::iterator it = log.begin(); it < log.end(); it++)
        if(*it == _c)   {return true;}     
    return false;
}

int main()
{
    int t, cnt = 0, i;

    cin >> t;
    for (int j = 0; j < t; j++)
    {
        vector<char> log;
        string s;
        char c = 0;
        cin >> s;

        if(s.length() >= 1) { log.push_back(s[0]); }
        for (i = 1; i < s.length(); i++)
        {
            if(s[i - 1] != s[i])
            {
                if(GetIsRedundant(log, s[i])) { break; }
                else { log.push_back(s[i]); }
            }
        }
        if(i == s.length()) { cnt++; }
    }
    cout << cnt;
}