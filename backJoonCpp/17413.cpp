#include <iostream>
#include <stack>
#include <string>
using namespace std;

void FlushStack(stack<char>& s)
{
    while(!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    stack<char> s;
    string str;
    bool isInTag = false;

    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == 60) 
        {
            FlushStack(s);
            isInTag = true;
            cout << '<';
        }
        else if(isInTag == true)
        {
            if(str[i] == 62) isInTag = false;
            cout << str[i];
        }
        else
        {
            if(str[i] >= 97 && str[i] <= 122 || str[i] >= 48 && str[i] <= 57) s.push(str[i]);
            else       //공백출현
            {
                FlushStack(s);
                cout << ' ';
            }
        }
    }
    FlushStack(s);
}
