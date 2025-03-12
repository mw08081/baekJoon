#include <iostream>
#include <algorithm>

using namespace std;

pair<int, int> t[100000];
int main()
{
    int n, l, cnt = 1;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> t[i].first >> t[i].second;
    }

    sort(t, t+n, [](pair<int, int> & a, pair<int,int> &b){
        if (a.second == b.second) {
            return a.first < b.first; 
        } else {
            return a.second < b.second;
        }
    });

    l = t[0].second;
    for(auto i = 1; i< n; i++){
        if(l <= t[i].first){
            l = t[i].second;
            cnt++;
        }
    }
    cout << cnt;
}