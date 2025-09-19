#include <vector>
#include <cmath>
#include <numeric>

using namespace std;

int solution(int n, vector<int> stations, int w)
{
    int answer = 0;
    int t = 1;
    for(auto e : stations) {
        auto cover_cnt = e - w - t;
        
        answer += ceil((float)cover_cnt / (2*w+1));
        t = e + w + 1;
    }
    
    if(t <= n) {
        auto cover_cnt = n - t + 1;
        answer += ceil((float)cover_cnt / (2*w+1));
    }
    
    return answer;
}

// int solution(int n, vector<int> stations, int w)
// {
//     int answer = 0;
//     vector<int> v(n+1, 0);
//     for(auto e : stations) {
//         v[e] = 1;
//         for(auto i = 1; i <= w; i++) {
//             if(e-i >= 1)v[e-i] = 1; 
//             if(e+i <= n) v[e+i] = 1;
//         }
//     }
    
//     // build center
//     int i = 1;
//     while(i <= n) {
//         if(v[i] == 1) {i++; continue;}
//         answer++;
//         auto res = accumulate(v.begin()+i, v.begin()+i+w+1, 0);
//         if(res == 0) {
//             // v.begin() + i + w 를 기준으로 양옆 칠하기
//             v[i+w] = 1;
//             for(auto j = 1; j <= w; j++) {
//                 if(i+w-j >= 1) v[i+w-j] = 1;
//                 if(i+w+j <= n+1) v[i+w+j] = 1;
//             }
//         } else {
//             v[i] = 1;
//             for(auto j = 1; j <= w; j++) {
//                 if(i-j >= 1) v[i-j] = 1;
//                 if(i+j <= n) v[i+j] = 1;
//             }
//         }
//         i++;
//     }

//     return answer;
// }
// 