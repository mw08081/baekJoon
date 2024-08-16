#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M;
    vector<vector<int>> v;
    cin >> N >> M;
    
    for (int i = 1; i < N+1; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if ( i < j ) 
                v.push_back(vector<int>(i ,j));
        }


    }
    for(auto e : v)
    {
        for(auto i : e)
            cout << i << " ";

        cout << endl;
    }
    
    
}