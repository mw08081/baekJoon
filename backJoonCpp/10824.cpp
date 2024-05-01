#include <iostream>
using namespace std;

int main()
{
    string n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    cout << stoll(n1+n2) + stoll(n3+n4);
}