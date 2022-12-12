#include <iostream>
using namespace std;

int GetHansu(int n)
{
    int cnt = 0;

    int d;
    for (int i = 100; i < n + 1; i++)
    {
        int val = i, d, beforeD, front, back;
        
        back = val % 10;
        val /= 10;
        front = val % 10;
        d = front - back;

        while(val >= 1)
        {
            back = val % 10;
            val /= 10;
            front = val % 10;
            beforeD = front - back;

            if(d != beforeD)
                break;
            
        }
        if(val < 1)
            cnt++;
    }
    
    return cnt;
}

int main()
{
    int n;
    cin >> n;

    if(n < 100)
        cout << n << '\n';
    else
        cout << 99 + GetHansu(n) << '\n';
}