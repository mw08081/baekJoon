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
    vector<char> log;
    char c;
    string s;

    cin >> s;

    int i;
    for (i = 1; i < s.length(); i++)
    {
        if(s[i] != s[i - 1])
        {
            if(GetIsRedundant(log, s[i - 1]) == true)
                break;
            else
            {
                log.push_back(s[i-1]);
                cout << s[i - 1] << " " << i << endl;
            }
                
        }
        
    }
    if(i == s.length() - 1) {cout << i << endl;}
    
}