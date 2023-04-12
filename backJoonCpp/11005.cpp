#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<char> res;
    int N, B;
    cin >> N >> B;

    while(N > 0)
    {
        res.push_front((N%B < 10) ? N%B+48 : N%B+55);
        N /= B;
    }
    
    for(auto e : res)
        cout << e;
}

// #include <algorithm> 's reverse() fucntion()