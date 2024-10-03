// #include <stdio.h>
// int main(void)
// {
//     int array [5] = {12, 13, 14};
//     int i;
//     for (i = 0; i < 5; i++) {
//         printf("%d番目：%d\n", i, array[i]);
//     }
//     return 0;
// }

#include <stdio.h>

void keisan(int x, int y, int *a1, int *a2);
int main(void)
{
    int result1;
    int result2;
    keisan(30, 10, &result1, &result2);
    printf("%d\n", result1);
    printf("%d\n", result2);

    return 0;
}

void keisan(int x, int y, int *a1, int *a2)
{
    *a1 = x + y;
    *a2 = x - y;
}