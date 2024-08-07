#include <iostream>
#include <vector>
using namespace std;
#define MAX 1000001
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> isPrime(MAX);
    int n=-1;

    isPrime[0] = isPrime[1] = 1;
    for(int i = 2; i*i <= MAX; i++)
        if(isPrime[i] == 0)
            for(int j = 2; j*i < MAX; j++)
                isPrime[i*j] = 1; 

    while(n){
        cin >> n;
        if(n==0)break;

        bool hasAns = false;
        for(int i = 3; i <= n/2; i+=2)
        {
            if(!isPrime[i] && !isPrime[n-i])
            {
                cout << n << " = " << i << " + " << n - i << '\n';
                hasAns = true;
                break;
            }
        }

        if(!hasAns)
            cout << "Goldbach's conjecture is wrong." << '\n';
    }
}