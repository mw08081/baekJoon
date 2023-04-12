#include <iostream>
int main()
{
    int res = 0, B;
    std::string N;
    std::cin >> N >> B;

    for(auto e : N)
    {
        res = res*B + ((e >= 65 ? e-55 : e-48));
        std::cout << res << std::endl;
    }
        
    std::cout << res;
}