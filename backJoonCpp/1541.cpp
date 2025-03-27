#include <iostream>
#include <stack>
using namespace std;

string n = "";
stack<int> ns;
stack<char> os;
bool b = false;

void f() {
    int t = stoi(n);
    if(b) {
        t += ns.top();
        ns.pop();
        b = false;
    }
    ns.push(t);
    n = "";
}

int main() 
{
    int res = 0;
    string exp;
    cin >> exp;

    for(auto e : exp){
        if(e == '+'|| e == '-'){
            // 숫자 처리
            f();
            
            // 연산자 계산

            if(!os.empty() && os.top() == '-' && e == '+'){
                b = true;
            } else {
                os.push(e);
            }
        } else {
            n += e;
        }
    }
    f();

    while(!ns.empty()){
        if(!os.empty() && os.top() == '-') res -= ns.top();
        else res += ns.top();
        
        ns.pop();
        if(!os.empty()) os.pop();
    }
    cout << res;
}
