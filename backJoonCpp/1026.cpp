#include <iostream>
#include <algorithm>
using namespace std;

bool comp(int a, int b){
    return a > b;
}

int main()
{
    int n, a[50], b[50], r=0;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    sort(a, a + n);
    sort(b, b + n, comp);

    for(int i=0; i<n; i++)
        r += a[i] * b[i];

    cout << r;
}