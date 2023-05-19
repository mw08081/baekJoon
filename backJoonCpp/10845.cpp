#pragma region using list

// #include <list>
// #include <iostream>
// using namespace std;
// int main()
// {
//     cout.tie(NULL);
//     cin.tie(NULL);
//     ios::sync_with_stdio(false);
    
//     list<int> r;
//     string c;
//     int t, v;

//     cin >> t;
//     while(t--)
//     {
//         cin >> c;
//         switch (c[1])           // u o i m r a
//         {
//         case 'u':
//             cin >> v;
//             r.push_back(v);
//             break;
//         case 'o':
//             if(r.empty()) cout << -1 << '\n';
//             else {
//                 cout << r.front() << '\n';
//                 r.pop_front();
//             }
//             break;
//         case 'i':
//             cout << r.size() << '\n';
//             break;
//         case 'm':
//             cout << r.empty() << '\n';
//             break;
//         case 'r':
//             if(r.empty()) cout << -1 << '\n';
//             else cout << r.front() << '\n';
//             break;
//         case 'a':
//             if(r.empty()) cout << -1 << '\n';
//             else cout << r.back() << '\n';
//             break;
//         }
        
//     }
// }
#pragma endregion

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    vector<int> r;
    string c;                       //command
    int fIdx = -1, bIdx = 0, t, v;   //frontIndex, backIndex, testCase Count, value
    cin >> t;

    while(t--)
    {
        cin >> c;

        switch (c[1]) 
        {
        case 'u':
            cin >> v;
            r.push_back(v);
            bIdx++;
            break; 
        case 'o':
            if(bIdx - fIdx - 1 == 0) cout << -1 << '\n';
            else
            {
                cout << r.at(fIdx + 1) << '\n';
                fIdx++; 
            }
            break; 
        case 'i':
            cout << bIdx - fIdx - 1 << '\n';
            break; 
        case 'm':
            cout << ((bIdx - fIdx - 1 == 0) ? 1 : 0) << '\n';
            break; 
        case 'r':
            if(bIdx - fIdx - 1 == 0) cout << -1 << '\n';
            else
            {
                cout << r.at(fIdx + 1) << '\n';
            }
            break; 
        case 'a':
            if(bIdx - fIdx - 1 == 0) cout << -1 << '\n';
            else
            {
                cout << r.at(bIdx - 1) << '\n';
            }
            break; 
        }
    }
}