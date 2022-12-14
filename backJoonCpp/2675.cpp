#include <iostream>
using namespace std;

int main()
{
    int t, time;
    string s;
    
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> time >> s;

        for (int j = 0; j < s.length() * time; j++)
            cout << s[j / time];

        cout << '\n';
    }
}

//이 문제를 보자마자 파이썬이 생각났다
//파이썬 코드는 아래와 같다

/*
t = int(input())

for i in range(t):
    time, s = input().split()

    for j in range(len(s)):
        print(int(time) * s[j], end = "")

*/