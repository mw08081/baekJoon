#include <iostream>
using namespace std;

int main()
{
    int arr[10003] = {0};
    int n, res = 0;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    
    for (int i = 1; i <= n; i++)
    {
        if(arr[i] > 0)                      //단독결제
        {                    
            if(arr[i+1] >= arr[i])          //이중결제
            {
                if(arr[i+2] >= arr[i])      //삼중결제
                {
                    arr[i+2] -= arr[i];
                    arr[i+1] -= arr[i];
                    res += 7;

                     continue;
                }
                arr[i+1] -= arr[i];
                res += 5;

                continue;
            }

            res += (arr[i] * 3);
            arr[i] = 0;
        }
    }

    cout << res;
    
}
