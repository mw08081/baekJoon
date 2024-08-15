#include <iostream>
using namespace std;

void Swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int GCD(int a, int b)
{
    if (a < b) {
        Swap(&a, &b);
    }

    if(a % b == 0) {
        return b;
    }
    else {
        return GCD(b, a % b);
    }
}

int main()
{
    int T, n, t;
    int arr[100];
    cin >> T;

    while(T--){
        long long ans = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> t;
            arr[i] = t; 
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                ans += GCD(arr[i], arr[j]);
            }
            
        }
        cout << ans << '\n';
    }
}