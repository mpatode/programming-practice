#include<iostream>
using namespace std;

class PPA
{
    public:
        int No1;
        int No2;


        //Default construcdtor- Ready made Tshirt
        PPA()
        {
            cout<<"Inside Default constructor\n";
        }

        //Parameterised constructor- Teller kadun Tshirt
        PPA(int a, int b)
        {
            cout<<"Inside Parameterised constructor\n";
        }

        //Copy constructor - Maapach blz
        PPA(PPA &obj)
        {
            cout<<"Inside Copy constuctor\n";
        }


        ~ PPA()
        {
            cout<<"Inside Destructor \n";
        }
};

int main()
{
    PPA pobj1;          //Default
    PPA pobj2(11, 21);  //Parameterized
    PPA pobj3(pobj1);   //Copy

    
    return 0;
}