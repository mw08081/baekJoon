#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main()
{
    vector<int>::iterator it;
    int v, lim, tot;
    
    while(true){
        cin >> v;
        if(v == -1) break;

        vector<int> r;
        for (int i = 1; i < v; i++)
            if(v%i==0) r.push_back(i);

        if(v == accumulate(r.begin(), r.end(), 0)){
            cout << v << " = ";
            for (it = r.begin(); it < r.end()-1; it++)
                cout << *it << " + ";
            cout << *it << '\n';
        }
        else cout << v << " is NOT perfect.\n";
    }
}