#include <iostream>
using namespace std;

int main()
{
    int t, time;
    string s;
    
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> time >> s;

        for (int j = 0; j < s.length() * time; j++)
            cout << s[j / time];

        cout << '\n';
    }
}