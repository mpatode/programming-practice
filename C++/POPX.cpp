#include <iostream>
using namespace std;

int Additon(int No1, int No2)  //(Parameter/Argument)// Parameters are local variables
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{

    int Value1 = 0, Value2 = 0, Result = 0;
    
    cout<<"Enter first Number : \n";
    cin>>Value1;

    cout<<"Enter second Number : \n";
    cin>>Value2;

    //Result = Value1 + Value2;
    Result = Additon(Value1, Value2);

    cout<<"Addition is : "<<Result<<"\n";
    

    return 0;
}

//Procedure, Function, Method, API = are Same