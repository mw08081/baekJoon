#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    long long c, t=0;
    int n;
    int a[100000] = {0};

    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    sort(a, a+n);
    
    c = a[0];
    for(int i = 1; i < n; i++){
        c += a[i];
        t += c;
    }
    printf("%lld", t);
}