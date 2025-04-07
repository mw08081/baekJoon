#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    n = 1000-n;

    cout << n/500 + n%500/100 + n%500%100/50 + n%500%100%50/10 + n%500%100%50%10/5 +  n%500%100%50%10%5;
}