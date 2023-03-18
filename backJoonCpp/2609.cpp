#include <iostream>
using namespace std;

int main()
{
    int isNonPrime[10001] = {1, 1};
    int n1, n2, tmp, ans1 = 1, ans2;


    cin >> n1 >> n2;
    
    if(n1 > n2)
    {
        tmp = n1;
        n1 = n2; 
        n2 = tmp;
    }

    for (int i = 2; i*i <= n2; i++)
        if(!isNonPrime[i]) 
            for (int j = 2; i*j <= n2; j++)
                isNonPrime[i*j] = 1;

    for (int i = 2; i <= n2; i++)
    {
        if(isNonPrime[i]) continue;

        while(n1 % i == 0 && n2 % i == 0)
        {
            ans1 *= i;

            n1 /= i;
            n2 /= i;
        }
    }
    ans2 = ans1 * n1 * n2;
    cout << ans1 << '\n' << ans2;
}