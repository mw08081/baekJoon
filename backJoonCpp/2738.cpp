#include <iostream>
using namespace std;

int main()
{
    int arr[100][100] = {0};
    int n, m, val;
    cin >> n >> m;

    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> val;
            arr[i][j] += val;
        }
    }
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
}