#include <iostream>
#include <stack>

using namespace std;

double Calc(double n1, double n2, char op)
{
    if(op == '+') return n1 + n2;
    else if(op == '-') return n1 - n2;
    else if(op == '*') return n1 * n2;
    else return n1 / n2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double n, res = 0, v[25] = {0}, n1, n2;
    string f;
    stack<double> s;

    cin >> n >> f;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for(auto c : f){
        if(c >= 65 && c <= 90) s.push(v[c-65]);
        else{
            n2 = s.top();
            s.pop();
            n1 = s.top();
            s.pop();

            s.push(Calc(n1,n2,c));
        }
    }
    cout<<fixed;
    cout.precision(2);
    cout<<s.top();
}