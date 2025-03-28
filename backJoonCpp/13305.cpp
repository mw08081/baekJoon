// #include "iostream"

// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL), cout.tie(NULL);

//     int p[100001] = {0};
//     int d[100001] = {0};
//     int n, i=0;
//     long long r=0, m;

//     cin >> n;
//     for(i = 0; i < n-1; i++) cin >> d[i];
//     for(i = 0; i < n; i++) cin >> p[i];
    
//     m = p[0];
//     for(i = 0; i < n; i++) {
//         if(m > p[i]) m = p[i];
//         r += m*d[i];
//     }

//     cout << r;
// }


#include "stdio.h"

int main() {
    int p[100001] = {0};
    int d[100001] = {0};
    int n, i = 0;
    long long r = 0, td = 0;

    scanf("%d", &n);
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &d[i]);
        td += d[i];
    }
    for (i = 0; i < n; i++) scanf("%d", &p[i]);

    i = 0;
    while (td) {
        int t = p[i], g = 0;
        while (t <= p[i] && i != n) g += d[i++];

        r += (long long)t * g; // long long으로 캐스팅
        td -= g;
    }
    printf("%lld\n", r); // long long 출력

    return 0;
}
