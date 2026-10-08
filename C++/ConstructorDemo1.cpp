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

        //Destructor
        ~ PPA()
        {
            cout<<"Inside Destructor \n";
        }
};

int main()
{
    PPA pobj1;
    PPA pobj2;

    
    return 0;
}