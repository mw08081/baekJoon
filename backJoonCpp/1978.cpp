#include <iostream>
using namespace std;

int main()
{
    int i, t, num, cnt = 0;
    cin >> t;

    while(t--)
    {
        cin >> num;

        for (i = 2; i < num; i++)
            if(num % i == 0) break;
        if(i == num) cnt++;
    }
    cout << cnt;
}