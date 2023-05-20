#include <iostream>
#include <deque>
using namespace std;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    deque<int> dq;
    string c;
    int t, v;

    cin >> t;
    while(t--)
    {
        cin >> c;

        switch (c[1])
        {
        case 'i':
            cout << dq.size() << '\n';
            break;
        case 'm':
            cout << dq.empty() << '\n';
            break;
        case 'r':
            if(dq.empty()) cout << -1 << '\n';
            else cout << dq.front() << '\n';
            break;
        case 'a':
            if(dq.empty()) cout << -1 << '\n';
            else cout << dq.back() << '\n';
            break;
        case 'u':       //push_front
            cin >> v;
            if(c[6] == 'r') dq.push_front(v);
            else dq.push_back(v);
            break;
        case 'o':      //pop_front
            if(dq.empty()) cout << -1 << '\n';
            else if(c[5] == 'r') 
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
            else
            {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
            break;
        }
    }
    
}