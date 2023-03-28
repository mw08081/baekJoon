#include<iostream>
#include <string>
using namespace std;
 
int main(){ 
    string s;
    while (true){
        getline(cin, s);
        if (!s.length())
            break;
        cout << s << '\n';
    } 
}