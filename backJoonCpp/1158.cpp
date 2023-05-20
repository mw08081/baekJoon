#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    queue<int> q;
    int c, i; //cnt, idx
    cin >> c >> i;

    for (int j = 1; j <= c; j++)
        q.push(j);
    
    cout << "<";
    while(!q.empty())
    {
        for (int j = 0; j < i-1; j++)
        {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << ((q.size() != 1) ? ", " : "");
        q.pop();
    }
    cout << ">";
}