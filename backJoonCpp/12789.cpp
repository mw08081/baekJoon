#include <iostream>
using namespace std;

int main()
{
    long long s, t=0, i=1;
    cin >> s;

    while(t < s) t += i++;
    if(t== s) cout << i-1;
    else cout << i-2;
}