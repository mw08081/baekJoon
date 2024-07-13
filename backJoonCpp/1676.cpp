#include <iostream>
using namespace std;

double Fac(int i)
{
    if(i == 0) return 1;
    else return i * Fac(i-1);
}

int main()
{
    // int n;
    // cin >> n;
    std::cout<<fixed;
    cout.precision(0);

    for(int i = 1; i < 500; i++)
    {
        cout << i << " " <<  Fac(i) << '\n';
    }
}