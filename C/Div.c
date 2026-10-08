#include<stdio.h>

int main() {

    int no1=0, no2=0, ans=0, remainder=0;

    printf("Enter First no. :");
    scanf("%d", &no1);

    printf("Enter second no. :");
    scanf("%d", &no2);

    ans = no1 / no2;
    remainder= no1 % no2;

    printf("The division is: %d\n", ans);
    printf("The Remainder is: %d\n", remainder);

    return 0;
}