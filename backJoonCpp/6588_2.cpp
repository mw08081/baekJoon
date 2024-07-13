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

    isPrime[0] = isPrime[1] = 1;
    for(int i = 2; i*i <= MAX; i++)
        if(isPrime[i] == 0)
            for(int j = 2; j*i < MAX; j++)
                isPrime[i*j] = 1; 

    for(int j = 6; j < MAX; j+=2)
    {
        bool hasAns = false;
        for(int i = 3; i <= MAX; i+=2)
        {
            if(!isPrime[i] && !isPrime[j-i])
            {
                if(i > MAX/2)
                    cout << j << " = " << i << " + " << j - i << '\n';
                //else    
                    //cout << "---;
                hasAns = true;
                break;
            }
        }

        if(!hasAns)
            cout << "Goldbach's conjecture is wrong." << '\n';
    }
}