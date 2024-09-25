#include <stdio.h>
int keisan (int kingaku);
int main (void)  {
    keisan(1000);
    return 0;
}

int keisan (int kingaku) {
    printf("%f", kingaku * 1.1);
    return 0;
}