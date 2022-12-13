#include <iostream>
using namespace std;

int main()
{
    int arr[30] = {0}, val;
    for (int i = 0; i < 28; i++)
    {
        cin >> val;
        arr[val - 1] = 1;
    }
    for (int i = 0; i < 30; i++)
    {
        if(arr[i] == 0)
            cout << i + 1 << '\n';
    }
}