#include <iostream>
using namespace std;

//worse than before(wtb)
int main()
{
    int n = 1, cnt;
    int * arr;

    cin >> n;
    while(n)
    {
        cnt = 0;

        arr = new int[2*n+1];
        fill_n(arr, 2*n+1, 1);
        arr[0] = arr[1] = 0;

        for (int i = 2; i*i <= 2*n; i++)
            if(arr[i])
                for (int j = 2; i*j <= 2*n; j++)
                    arr[i*j] = 0;
                    

        for (int i = n+1; i <= 2*n; i++)
            if(arr[i])
                cnt++;
                
        
        cout << cnt << '\n';
        delete[] arr;
        cin >> n;
    }
}