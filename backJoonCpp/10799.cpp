#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    string str;
    int pc = 0, res = 0;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == '(')
        {
            if(str[i+1] == ')') 
            {
                res += pc;
                i++;
            }
            else pc++;
        }
        else
        {
            pc--;
            res++;
        }
    }
    cout << res;
}
