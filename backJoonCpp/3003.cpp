#include <iostream>

using namespace std;

/*
int main()
{
    int k, q, l, b, n, p;

    cin >> k >> q >> l >> b >> n >> p;
    cout << 1 - k << " "  << 1 - q << " " << 2 - l << " " << 2 - b << " " << 2 - n << " " << 8 - p;
}
*/

int main()
{
    int n, i = 0;
    for (; i < 6; i++)
    {
        cin >> n;
        cout << "112228"[i] - '0' - n << " ";
    }
}

/*

//문자열뒤에 바로 [] 인덱싱을 할 수 있는 듯하다

#include<ios>
int n,i;main(){for(;i<6;++i)scanf("%d",&n),printf("%d ","112228"[i]-n-'0');}

*/