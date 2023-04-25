#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    string cmd;
    int t, a;
    cin >> t;

    while(t--){
        cin >> cmd;

        switch(cmd[0]) {
            case 'p':
                if(cmd[1] == 'u') {
                    cin >> a;
                    v.push_back(a);
                } 
                else {
                    if(!v.size()) cout << -1 << '\n';
                    else {
                        cout << v.back() << '\n';
                        v.pop_back();
                    }
                }
                break;
            case 't' :
                    if(v.size() == 0) cout << -1 << '\n';
                    else cout << v.back() << '\n';
                break;
            case 's' : 
                    cout << v.size() << '\n';
                break;
            case 'e' :
                    cout << (v.empty() ? 1 : 0) << '\n';
                break;
        }
    }
}