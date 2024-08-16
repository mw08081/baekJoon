#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int c[9], tot = 0, i, j;
    for (i = 0; i < 9; i++){
        cin >> c[i];
        tot += c[i];
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = i+1; j < 9; j++)
        {
            if(tot - c[i] - c[j] == 100)
            {
                vector<int> v;
                for (int k = 0; k < 9; k++)
                {
                    if(k == i || k == j)
                        continue;
                    
                    v.push_back(c[k]);
                }
                sort(v.begin(), v.end());
                
                for(auto e : v)
                    cout << e << '\n';
                return 0;
            }
        }   
    }
}