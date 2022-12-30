/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

int main() {
    string s;
    char c[1000000];
    vector<string> token_vector;

    getline(cin, s);

    //strtok쓰기위해 string -> char 
    strcpy(c, s.c_str());

    //문자열 자르기
    char* tok = strtok(c, " ");
    while (tok != NULL) {
        token_vector.push_back(string(tok));
        tok = strtok(NULL, " ");
    }

    cout << token_vector.size() << '\n';
}
*/

/*
#include <iostream>
#include <cstring>
using namespace std;

char s[1000000];

int main()
{
    int cnt = 0;
    char * ptr;

    cin.getline(s, 1000000);

    ptr = strtok(s, " ");
    while(ptr != NULL)
    {
        cnt++;
        ptr = strtok(NULL, " ");
    }
    cout << cnt << '\n';
}
*/


#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cnt = 0;
    string s;
    getline(cin, s);

    if(s.empty() == true)
    {
        cout << 0 << '\n';
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
            if(s[i] == ' ' && (i + 1) != s.length())
                cnt++;
    
        cout << (s[0] != ' ' ? cnt + 1 : cnt) << '\n';
    }

    return 0;
}
/**/