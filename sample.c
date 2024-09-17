#include <stdio.h>
int main(void)
{
    int number;
    scanf("%d", &number);
    if (number >= 5 && number <= 10) printf("5~10の間です");
    if (number < 5 || number > 10) printf("5~10の間ではありません");
    return 0;
}