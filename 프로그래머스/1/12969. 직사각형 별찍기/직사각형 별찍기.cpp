#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    
    for(auto i = 0; i < b; i++){
        for(auto j = 0; j < a; j++) cout << "*";
        cout << '\n';
    }
    return 0;
}