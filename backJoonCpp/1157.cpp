#include <iostream>
using namespace std;

int cnt[26];

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            cnt[s[i] - 'A']++;
        else if(s[i] >= 'a' && s[i] <= 'z')
            cnt[s[i] - 'a']++;
    }

    int max = 0, idx;
    for (int i = 0; i < 26; i++)
    {
        if(cnt[i] > max)
        {
            max = cnt[i];
            idx = i;
        }
        else if(cnt[i] == max)
        {
            idx = -1;
        }
    }

    if(idx == -1)
        cout << '?' << '\n';
    else
        cout << (char)(idx + 'A') << '\n';
}

// #include <iostream>
// using namespace std;

// int main(int argc, const char * argv[]) {
// //  #1157
//     string str;
//     cin >> str;
    
//     int arr[26] = {0};
//     for(int i = 0; i < str.length(); i++)
//     {
//         if(str[i] >= 65 && str[i] <= 90)
//             arr[str[i] - 65]++;
//         else if(str[i] >= 97 && str[i] <= 122)
//             arr[str[i] - 97]++;
//     }
    
//     int max = -1;
//     char idx = -1;
    
//     for(int i = 0; i < 26; i++)
//     {
//         if(arr[i] > max){
//             max = arr[i];
//             idx = i + 65;
//         }
//         else if(arr[i] == max){
//             idx = -1;
//         }
//     }
    
//     if(idx == -1)
//         cout << "?" << endl;
//     else
//         cout << idx << endl;
    
//     return 0;
// }