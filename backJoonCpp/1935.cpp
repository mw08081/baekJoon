#include <iostream>
#include <stack>

using namespace std;

float Calc(float n1, float n2, char op)
{
    if(op == '+') return n1 + n2;
    else if(op == '-') return n1 - n2;
    else if(op == '*') return n1 * n2;
    else if(op == '/') return n1 / n2;
    else return 0;
}

int main()
{
    bool isIn = false;
    int n, res = 0, v[25] = {0};
    string f;
    stack<char> s;

    cin >> n >> f;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for(auto c : f){
        if(c >= 65 && c <= 90) s.push(c);
        else{
            if(!isIn) {
                res = s.top();
                s.pop();
                res = Calc(res, s.top(), c);
                s.pop();
            }
            else {
                
            }
        }
    }
}