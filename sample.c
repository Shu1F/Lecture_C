#include <stdio.h>
int fruits(int apple);
int main(void)
{
    int hoge;
    hoge = fruits(5);
    if (hoge < 3000)
    {
        printf("予算に収まりました");
    }
    else
    {
        ("予算オーバーです");
    }
    printf("%d", hoge);
    return 0;
}

int fruits(int apple)
{
    int sum;
    sum = apple * 300;
    return sum;
}