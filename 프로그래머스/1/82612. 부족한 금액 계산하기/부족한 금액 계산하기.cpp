using namespace std;

long long solution(int price, int money, int count)
{
    long long need = 0;
    for(auto i = 0; i < count; i++){
        need += (price * (i+1));
    }

    return money < need ? need - money : 0;
}