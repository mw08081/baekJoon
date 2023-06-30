#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int t, v;
    int arr[1000001];
    int app[1000001];
    vector<int> ans(1000001);

    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> v;
        arr[i] = v;
    }
    for (int i = 1; i <= t; i++)
        app[arr[i]]++;
    
    stack<int> stApp;
    stack<int> stArr;
    for (int i = t; i >= 0; i--)
    {
        while(!stApp.empty() && stApp.top() <= app[arr[i]]) 
        {
            stApp.pop();
            stArr.pop();
        }

        if(stArr.empty()) ans[i] = -1;
        else ans[i] = stArr.top();

        stApp.push(app[arr[i]]);
        stArr.push(arr[i]);
    }
    
    for (int i = 1; i < t; i++)
        cout << ans[i] << " ";
    cout << -1;
}