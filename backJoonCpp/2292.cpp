#include <iostream>
using namespace std;

int main()
{
    int n, normal = 0, i = 0;
    cin >> n;

    while(normal < n)
    {
        i++;
        normal = 3 * i * i - 3 * i + 1; //3x^2 - 3x + 1
    }
    cout << i;
}