#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> arr;
    string s;
    int maxLen = 0;
    
    for (int i = 0; i < 5; i++)
    {
        cin >> s;
        arr.push_back(s);

        if(s.length() > maxLen) maxLen = s.length();
    }

    for (int i = 0; i < maxLen; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(i >= arr.at(j).length())
                continue;
            cout << arr.at(j)[i];
        }
    }    
}