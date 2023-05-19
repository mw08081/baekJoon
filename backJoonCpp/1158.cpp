#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    int c, i; //cnt, idx
    cin >> c >> i;

    for (int j = 1; j <= c; j++)
        q.push(j);
    
    while(q.empty() == false)
    {
        for (int j = 0; j < i-1; j++)
        {
            q.push(q.front());
            q.pop();
        }
        q.pop();
    }
    for(auto e : q)
        cout << e << " ";
}