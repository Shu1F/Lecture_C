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
#include <string.h>
int main(void)
{
    char str[256];
    scanf("%s", str);
    int i;
    i = strlen(str);
    printf("%d", i);
    return 0;
}