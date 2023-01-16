#include <iostream>
using namespace std;

bool arr[100][100];
int main()
{
    int t, x, y, i, j, cnt=0;
    cin >> t;

    while(t--)
    {
        cin >> x >> y;
        
        for (i = x; i < x+10; i++)
            for (j = y; j < y+10; j++)
                if(arr[i][j] == false)
                {
                    arr[i][j] = true;
                    cnt++;
                }
    }
    cout << cnt << endl;   
}