#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    stack<char> st;
    string s;
    int t;
    cin >> t;
    cin.ignore();

    while(t--){
        getline(cin, s);
        s += ' ';

        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] == ' '){
                while(st.empty() == false){
                    cout << st.top();
                    st.pop();
                }
                cout << ' ';
            }
            else {
                st.push(s[i]);
            }
        }
    }
}

// #include <iostream>
// #include <stack>
// #include <vector>
// #include <string>

// using namespace std;

// int main()
// {
//     string s;
//     int t;
//     cin >> t;
//     cin.ignore();

//     while(t--) {
//         vector<stack<char>> vs;
//         getline(cin, s);

//         vs.push_back(stack<char>());
//         for (int i = 0; i < s.length(); i++)
//         {
//             if(s[i] != ' ') vs.at(vs.size() - 1).push(s[i]);        
//             else vs.push_back(stack<char>());
//         }

//         for (int i = 0; i < vs.size(); i++)
//         {
//             while(vs.at(i).size() != 0){
//                 cout << vs.at(i).top();
//                 vs.at(i).pop();
//             }
//             cout << " ";
//         }
//         cout << '\n';
//     }
// }