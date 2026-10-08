#include<stdio.h>

int main()
{
    int Arr[] = {10, 20, 30, 40};

    print("%d\n", Arr[2]);
    print("%d\n", *(Arr+2));
    print("%d\n", *(2+Arr));
    print("%d\n", 2[Arr]);

    return 0;
}