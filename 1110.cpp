#include <iostream>
using namespace std;

int main()
{
    int org, n, cnt = 0, res = -1;
    cin >> n;
    org = n;

    while(org != res)
    {
        res = n / 10 + n % 10;
        res = n % 10 * 10 + res % 10;
        n = res;
        
        cnt++;
    }
    cout << cnt << endl;
}