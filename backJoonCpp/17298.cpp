#include <stack>
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    stack<int> s;
    int n, v;
    int seq[1000001];
    int ans[1000001];

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v;
        seq[i] = v;
    }
    
    for (int i = n; i > 0; i--)
    {
        while(!s.empty() && seq[i] >= s.top())  s.pop();

        if(s.empty()) ans[i] = -1;
        else ans[i] = s.top();

        s.push(seq[i]);
    }
    
    for (int i = 1; i < n; i++)
        cout << ans[i] << " ";
    cout << -1;
}

//3 5 2 7
//5 7 7 -1 


// 10  2  8  3  7  5   6  10   9 
// -1  8 10  7  10  6  10  -1  -1

//6 : 10        >> 6 10
//5 : 6 10      >> 5 6 10
//7 : 10        >> 7 10
//3 : 7 10      >> 3 7 10
//8 : 10        >> 8 10
//2 : 8 10      >> 2 8 10
//10 : 

// 3 5 4 2 1 7