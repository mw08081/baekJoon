#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int a, int b) {
    string str[7] = {"SAT","SUN","MON","TUE","WED","THU","FRI"};
    int lastDay[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = 0;
    
    for(auto i = 0; i < a-1; i++) days += lastDay[i];
    days += (b + 5);
    
    return str[days % 7];
}