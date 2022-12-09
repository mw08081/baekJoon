#include <iostream>
using namespace std;

int main()
{
    int t, n, arr[1000] = {0}, tot, cnt;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        tot = cnt = 0;

        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            tot += arr[j];
        }
        for (int j = 0; j < n; j++)
        {
            if(tot / n < arr[j])
                cnt++;
        }
        cout << fixed;
        cout.precision(3);
        cout << (double)cnt / n * 100 << "%" << endl;
    }
}