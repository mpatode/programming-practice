#include<stdio.h>

int main(){
    int a=0, b=0, ans=0;

    printf("Enter first no. : ");
    scanf("%d", &a);

    printf("Enter Second no. :");
    scanf("%d", &b);

    ans =  a * b;
    printf("The Multiplication is %d\n", ans);

    return 0;
}