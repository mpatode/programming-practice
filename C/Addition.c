#include<stdio.h>

int main(){
    int NO1=0, NO2=0, Ans=0;
    printf("Enter First No: ");
    scanf("%d", &NO1);

    printf("Enter Second No: ");
    scanf("%d", &NO2);

    Ans = NO1 + NO2; 
    printf("Addition is %d\n", Ans);

    return 0;
}