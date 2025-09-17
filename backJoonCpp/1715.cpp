#include <stdio.h>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
    long long c, t=0;
    int n,v ;
    list<int> l;

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &v);
        l.push_back(v);
    }   
    l.sort();
    for(auto x : l) printf("%d ", x);

    

    printf("%lld", t);
}