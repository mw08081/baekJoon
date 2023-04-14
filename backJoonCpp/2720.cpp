#include <iostream>

int main()
{
    int T, c;
    std::cin>>T;
    while(T--)
    {
        std::cin >> c;
        std::cout << c/25 << " " << c%25/10 << " " << c%25%10/5 << " " << c%25%10%5 << '\n';
    }
}