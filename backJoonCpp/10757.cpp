#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>::iterator v1it, v2it;
    vector<int> v1, v2;
    string n1, n2, str;
    int i, tmp;
    cin >> n1 >> n2;

    if(n1.length() < n2.length())
    {
        str = n1;
        n1 = n2;
        n2 = str;
    }

    for (i = 0; i < n1.length(); i++)
        v1.push_back(n1[i] - '0');

    i = n1.length() - n2.length();
    while(i--)
        v2.push_back(0);
    for (i = 0; i < n2.length(); i++)
        v2.push_back(n2[i] - '0'); 

    for (v1it = v1.end() - 1, v2it = v2.end() - 1; v1it >= v1.begin(); v1it--, v2it--)
    {
        tmp = *v1it + *v2it;
        *v1it = tmp % 10;
        *(v1it-1) += tmp / 10;
    }

    if(tmp >= 10)
            cout << tmp / 10;
    for (v1it = v1.begin(); v1it < v1.end(); v1it++)
        cout << *v1it;
}