#include <iostream>
using namespace std;

int main()
{
    int b[101];
    int n,m, i,j,k;

    for (int i = 0; i < 101; i++)
        b[i] = i;
    
    cin >> n >> m;
    while(m--)
    {
        cin >> i >> j >> k;

        string tmp;
        int idx;
        int cnt = j - i + 1;
        int p = k;

        for (idx = 0; idx < cnt; idx++)
        {
            tmp += (b[p] + 48);
            if(p == j) p = i - 1;
            p++;
        }
        
        idx = 0;
        for (int q = i; q <= j; q++)
            b[q] = (tmp[idx++] - 48);

        for (int r = 1; r <= n; r++)
            cout << b[r] << " ";
        cout << endl;
    }

    for (int r = 1; r <= n; r++)
        cout << b[r] << " ";
    
    
}