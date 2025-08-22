#include <string>
#include <vector>

using namespace std;

char getNum(string t)
{
    if (t == "zero") {
        return '0';
    } else if (t == "one") {
        return '1';
    } else if (t == "two") {
        return '2';
    } else if (t == "three") {
        return '3';
    } else if (t == "four") {
        return '4';
    } else if (t == "five") {
        return '5';
    } else if (t == "six") {
        return '6';
    } else if (t == "seven") {
        return '7';
    } else if (t == "eight") {
        return '8';
    } else if (t == "nine") {
        return '9';
    } else {
        return '-';
    }
}

int solution(string s) {
    string a = "";
    string t = "";
    char n;
    
    for(auto i = 0; i < s.size(); i++){
        if(s[i] < '0' || s[i] > '9') {
            t += s[i];
            
            n = getNum(t);
            if(n != '-'){
                a += n;
                t.clear();
            }
        } else a += s[i];
    }
    return stoi(a);
}