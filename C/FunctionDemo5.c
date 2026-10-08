#include<stdio.h>

void Addition(int No1, int No2)
{
    int Result = 0;
    Result = No1 + No2;     //Business Logic
    printf("Addition is: %d\n", Result);
}

int main () 
{
    int Value1 = 0, Value2 = 0;//Allowed if same DataType- e.g. 3 Chaha

    printf("Enter first number: \n");
    scanf("%d", &Value1);

    printf("Enter second number: \n");
    scanf("%d", &Value2);

    Addition(Value1, Value2); // Calling a function




    return 0;
}