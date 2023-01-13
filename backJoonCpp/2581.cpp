#include <iostream>
using namespace std;

int main()
{
    int st, end, min = -1, sum = 0, j;

    cin >> st >> end;

    for (int i = st; i <= end; i++)
    {
        for (j = 2; j < i; j++)
            if(i % j == 0)  break;
        
        if(j == i)
        {
            if(min == -1)
                min = i;
            sum += i;
        } 
    }
    
    if(min == -1)
        cout << min;
    else
        cout << sum << '\n' << min;
}