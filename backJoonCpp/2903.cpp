#include <cstdio>
int main()
{
    int lv;
    scanf("%d", &lv);
    printf("%d", ((1<<lv)+1)*((1<<lv)+1));
}