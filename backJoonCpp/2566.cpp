#include <iostream>
using namespace std;

int main()
{
    int i, j, max = -1, val;

    for (int p = 0; p < 9; p++)
    {
        for (int q = 0; q < 9; q++)
        {
            cin >> val;

            if(val >= max)
            {
                max = val;
                i = p;
                j = q;
            }
        }
        
    }
    cout << max << '\n' << i + 1 << " " << j + 1 << '\n';
}