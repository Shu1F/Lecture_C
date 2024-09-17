#include <stdio.h>
int main(void)
{
    int number;
    scanf("%d", &number);
    if (number < 10) printf("10未満です");
    if (number > 10) printf("10より大きいです");
    if (number == 10) printf("10と等しいです");
    return 0;
}
// 1:47:58/4:38:24