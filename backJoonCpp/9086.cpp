#include <iostream>
using namespace std;

int main()
{
    int t;
    string s;
    cin >> t;

    while(t--)
    {
        cin >> s;
        cout << s[0] << s[s.length() - 1] << '\n';
    }
}