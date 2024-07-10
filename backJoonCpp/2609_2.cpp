#include <iostream>
using namespace std;

int main()
{
    int a, b, r;
    cin >> a >> b;

    if(a < b) {
        r = b;
        b = a;
        a = r;
    }

    while(r != 0)
    {
        r = a % b;
        

    }
}