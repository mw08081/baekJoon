#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    string str;
    stack<char> s;

    cin >> str;
    for(auto e : str) {
        if( e >= 65 && e <= 90) cout << e;
        else {
            if (s.empty()) {
                s.push(e);
            }
            else if(e == '(') s.push(e);
            else if(e == ')') {
                while(!s.empty() && s.top() != '(') {
                    cout << s.top();
                    s.pop();
                }
                s.pop();
            }
            else if(e == '*' || e == '/') {
                while(!s.empty() && (s.top() == '*' || s.top() == '/')) {
                    cout << s.top();
                    s.pop();
                }
                s.push(e);
            }
            else {
                while(!s.empty() && s.top() != '(') {
                    if(s.top() != '(') cout << s.top();
                    s.pop();
                }
                s.push(e);
            }
        }
    }
    
    while(!s.empty()) {
        cout << s.top();
        s.pop();
    }
}