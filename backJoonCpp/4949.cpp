#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() 
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    string s;
    getline(cin, s);
    while(s != ".")
    {
        bool isNo = false;
        stack<char> cs;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(' || s[i] == '[') cs.push(s[i]);
            else if(s[i] == ')' || s[i] == ']')
            {
                if(!cs.empty() && ((s[i] == 41 && cs.top() == 40) || (s[i] == 93 && cs.top() == 91))) cs.pop();
                else 
                {
                    isNo = true;
                    break;
                }
            }
        }

        cout << ((!isNo && cs.empty()) ? "yes" : "no") << '\n';
        getline(cin, s);
    }
}