#include <stdio.h>
int main(void)
{
    int year = 1;
    double money = 1000000;
    while (money < 100000000) {
        year++;
        money = (money + 600000) * 1.05;
    }
    
    printf("%d年目：%f 円となり、資産が１億円を超えます", year, money);
    return 0;
}
// 2:023:46/