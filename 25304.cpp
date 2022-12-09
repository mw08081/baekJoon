#include <iostream>
using namespace std;

int main()
{
    int res, n, item, cnt, tot = 0;

    cin >> res >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> item >> cnt;
        tot += (item * cnt);
    }

    cout << (res == tot ? "Yes" : "No") << endl;
}