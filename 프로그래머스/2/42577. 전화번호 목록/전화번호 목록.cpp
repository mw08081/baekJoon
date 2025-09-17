#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

bool solution(vector<string> phone_book) {
    unordered_set<string> s;
    
    sort(phone_book.begin(), phone_book.end(), [](const string& a, const string& b){
       return a.size() > b.size();
    });
    
    for(auto e : phone_book){
        if(s.insert(e).second == false) return false;
        
        for(int i = 1; i < e.size(); i++) 
            s.insert(e.substr(0,i));
    }
    
    return true;
}