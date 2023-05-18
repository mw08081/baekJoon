#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    vector<char> r;             //result
    stack<int> s;               //stack
    int t, v, idx = 1;          //count, value, index
    int h[100001] = {0};        //history

    cin >> t;
    while(t--)
    {
        cin >> v;
        if(s.empty() == true) {
            for (int k = 1; k < 100001; k++){
                if(h[k] == 0)
                {
                    s.push(k);
                    r.push_back('+');
                    h[k] = 1;
                    break;
                }
            }
        }
            
        if(s.top() == v){
            s.pop();
            r.push_back('-');
        }
        else if(s.top() < v){
            for (int k = s.top()+1; k <= v; k++){
                if(h[k] == 1) continue;

                s.push(k);
                r.push_back('+');
                h[k] = 1;   
            }
            s.pop();
            r.push_back('-');
        }
        else {
            cout << "NO";
            return 0;
        }
    }

    for(auto e : r)
        cout << e << '\n';
}