#include <iostream>
#include <algorithm>
#define MAX 1000001

using namespace std;

int db[MAX] = {0, 0};

void Get(int v)
{
    int vs[3] = {MAX, MAX, MAX};

    if (v % 2 == 0)
        vs[0] = 1 + db[v/2];
    if (v % 3 == 0)
        vs[1] = 1 + db[v/3];
    vs[2] = 1 + db[v-1];

    db[v] = *min_element(vs, vs+3);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    int v;
    cin >> v;

    for (int i = 2; i <= v; i++)
        Get(i); 
    cout << db[v] << endl;
}