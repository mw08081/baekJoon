#include <iostream>
#include <string>
using namespace std;

int main()
{
    int r[4] = {0};
    string s;

    while(getline(cin, s)){
        for(auto c: s){
            if ( c >= 65 && c <= 90) r[1]++;
            else if( c>= 97 && c <= 122) r[0]++;
            else if( c >= 48 && c <= 57) r[2]++;
            else if ( c == 32) r[3]++;
        }
        cout << r[0] << " " << r[1] << " " << r[2] << " " << r[3] << '\n';
        r[0]=r[1]=r[2]=r[3]=0;
    }
}