#include <stack>
#include <iostream>
using namespace std;

int main()
{
    string s;
    int t;
    cin >> t;

    while(t--){
        cin >> s;
        stack<char> st;

        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(') st.push('(');
            else 
            {
                if(st.empty()) {
                    st.push(')');
                    break;
                }
                else st.pop();
            }
        }
        cout << (st.empty() ? "YES" : "NO") << '\n';
    }
}