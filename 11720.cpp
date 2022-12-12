#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, tot = 0;
    string str;

    cin >> n >> str;

    for (int i = 0; i < n; i++)
    {
        tot += (str[i] - '0');
    }
    cout << tot << '\n';
}