#include<stdio.h>


int main () 
{
    int Value1 = 0, Value2 = 0, Ans = 0; //Allowed if same DataType- e.g. 3 Chaha

    printf("Enter first number: \n");
    scanf("%d", &Value1);

    printf("Enter second number: \n");
    scanf("%d", &Value2);

    Ans = Value1 + Value2;  //Bussiness Logic


    printf("Addition is : %d\n", Ans);


    return 0;
}