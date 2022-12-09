#include <iostream>
using namespace std;

int main()
{
    int s;
    cin >> s;
    cout << (s >= 90 ? "A" :(s >= 80 ? "B" : (s >= 70 ? "C" : (s >= 60 ? "D" : "E")))) << endl;
}