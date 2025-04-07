#include <stdio.h>
#include <algorithm>
using namespace std;

bool comp(const int& a, const int& b){
    return a > b;
}

int main()
{
    
    int a[100001] = {0};
    int n, max = 0;
    
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);

    sort(a+1, a+n+1, comp);
    for(int i = 1; i <= n; i++)
        if(i * a[i] > max) max = i * a[i];
    
    printf("%d", max);
}