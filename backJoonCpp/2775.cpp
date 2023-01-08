#include <iostream>
using namespace std;

int GetMemberCnt(int k, int n)
{
    if(k == 0 || n == 1)
        return n;
    else
        return GetMemberCnt(k, n - 1) + GetMemberCnt(k - 1, n);
    
}

int main()
{
    int T, k, n;
    cin >> T;
    
    while(T--)
    {
        cin >> k >> n;
        cout << GetMemberCnt(k, n) << '\n';
    }
}