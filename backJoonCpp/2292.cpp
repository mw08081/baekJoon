#include <iostream>
using namespace std;

int main()
{
    int n, res, cnt = 0, i = 1;
    cin >> n;
    res = (n - 1) / 6;

    if(res == 0) { cout << 1; }
    else
    {
        while(res >= i)
        {
            res -= i++;
            cout << res << endl;
        }
            
        cout << i + 1; 
    }
}