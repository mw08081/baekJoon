#include <iostream>
#include <stack>

using namespace std;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    string s;
    stack<char> l, r;   
    int t;              //testCase Count
    char c;             //command

    cin >> s >> t;

    for (int i = 0; i < s.length(); i++)
        l.push(s[i]);

    while(t--)
    {
        cin >> c;

        switch (c)
        {
        case 'L':
            if(!l.empty()){
                r.push(l.top());
                l.pop();
            }
            break;
        case 'D':
            if(!r.empty()){
                l.push(r.top());
                r.pop();
            }
            break;
        case 'B':
            if(!l.empty())
                l.pop();
            break;
        case 'P':
            cin >> c;
            l.push(c);
            break;
        }
    }

    while(!l.empty())
    {
        r.push(l.top());
        l.pop();
    }
    while(!r.empty())
    {
        cout << r.top();
        r.pop();
    }
}