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
    int n;

    for(int i = 2; i <= MAX; i++)
        for(int j = 1; j*i < MAX; j++)
            if(isPrime[j*i] == 0)
                isPrime[i*j] = 1; 

            
    for (int i = 2 ; i < 100; i++)
        if(isPrime[i] == 0)
            cout << i << endl;
    return 0;
    cin >> n;
    while(n--){

    }
}