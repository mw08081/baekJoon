#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    
    for(auto c : s) {
        if ( c >= 'a' && c <= 'm' || c >= 'A' && c <= 'M')
            cout << (char)(c+13);
        else if (c >= 'n' && c <= 'z' || c >= 'N' && c <= 'Z')
            cout << (char)(c-13);
        else 
            cout << c;
    }
}