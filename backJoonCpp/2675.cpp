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
        char * arr = new char[s.length() * time];

        for (int j = 0; j < s.length() * time; j++)
        {
            arr[j] = s[j / time];
            cout << arr[j];
        }
        cout << '\n';
    }
    
    /*
    int t, time;
    string s;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> time >> s;
        for (int j = 0; j < s.length(); j++)
        {
            for (int k = 0; k < time; k++)
                cout << s[j];
            cout << '\n';
        }
    }
    */
}