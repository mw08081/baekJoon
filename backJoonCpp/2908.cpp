#include <iostream>
using namespace std;

int GetReverseNum(int n)
{
    int h = n / 100;    //백의 자리
    int u = n % 10;              //일의 자리

    return (n - ((h - u) * 100) - (u - h));
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << (GetReverseNum(a) > GetReverseNum(b) ? GetReverseNum(a) : GetReverseNum(b));
}