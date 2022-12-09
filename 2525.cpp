#include <iostream>
using namespace std;

int main()
{
    int h, m, n;
    int incrSatHour;
    cin >> h >> m >> n;

    incrSatHour = n / 60;
    incrSatHour += (m + n % 60 >= 60 ? 1 : 0);

    cout << (h + incrSatHour >= 24 ? h + incrSatHour - 24 : h + incrSatHour) << " " << (m + n % 60 >= 60 ? m + n % 60 - 60 : m + n % 60) << endl;
}