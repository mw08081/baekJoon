#include <iostream>
using namespace std;

int main()
{
    int arr[100] = {0};
    int n, val, cnt = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> val;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == val)
            cnt++;
    }
    cout << cnt << '\n';
}