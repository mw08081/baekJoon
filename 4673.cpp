#include <iostream>
using namespace std;

int arr[10000];

void d(int val)
{
    int res = val;
    while(val >= 1)
    {
        res += (val % 10);
        val /= 10;
    }
    arr[res - 1] = 1;
}

int main()
{

    for (int i = 1; i < 10001; i++)
    {
        d(i);
    }
    
    for (int i = 0; i < 10000; i++)
        if(arr[i] == 0)
            cout << i + 1 << '\n';
    
}