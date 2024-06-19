#include <iostream>

using namespace std;

void Swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, a, b;
    cin >> t;

    while(t--){
        cin >> a >> b;
        if(a>b) Swap(&a, &b);

        for (int i = 1; i <= a; i++)
        {
            if(b*i % a == 0) {
                cout << b*i << '\n';
                break;
            }
        }
    }
}