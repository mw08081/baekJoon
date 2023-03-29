#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// int main()
// {
//     int b[101];
//     int n,m, i,j,k;
//     vector<int> v;

//     for (int i = 0; i < 101; i++)
//         b[i] = i;
    
//     cin >> n >> m;
//     while(m--)
//     {
//         cin >> i >> j >> k;

//         for (int x = k; x <= j; x++)
//             v.push_back(b[x]);
//         for (int x = i; x < k; x++)
//             v.push_back(b[x]);

//         vector<int>::iterator it = v.begin();
//         for (int x = i; x <= j; x++, it++)
//             b[x] = *it;

//         vector<int>().swap(v);
//     }

//     for (int r = 1; r <= n; r++)
//         cout << b[r] << " ";
// }

int main()
{
    int n, m, i, j, k;
    vector<int> v;

    for (int i = 1; i <= 100; i++)
        v.push_back(i);

    cin >> n >> m;
    while(m--)
    {
        cin >> i >> j >> k;
        rotate(v.begin()+(i-1), v.begin() + (k-1), v.begin()+j);
    }
    for (int i = 0; i < n; i++)
        cout << v.at(i) << " ";
}