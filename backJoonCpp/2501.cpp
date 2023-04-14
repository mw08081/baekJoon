#include <cstdio>
int main()
{
    int n, k, c = 0, i;
    scanf("%d %d", &n, &k);
    for (i = 1; i <= n; i++)
        if(n%i==0)
            if(++c==k) break;
    printf("%d", (k==c)?i:0);
}