#include <iostream>
using namespace std;

int main()
{
    int T, h, w, n;
    cin >> T;
    
    while(T--)
    {
        cin >> h >> w >> n;
        cout << (n%h==0?h:n%h)*100 + (n%h==0?n/h:n/h+1) << '\n';
    }       
}