#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    if (b==0) return a;
    else return GCD(b, a%b);
}

int main()
{
    int a, b, r;
    cin >> a >> b;

    if(a < b) {
        r = b;
        b = a;
        a = r;
    }

    r = GCD(a, b);
    cout << r << '\n' << a * b / r;
}