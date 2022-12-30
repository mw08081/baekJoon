#include <iostream>
using namespace std;

int main()
{
    int f, p, s;        //f : fixed Cost, p : price per making one unit, s : sale price
    cin >> f >> p >> s;

    if(p >= s) { cout << -1; }
    else
        cout << f / (s - p) + 1;
}