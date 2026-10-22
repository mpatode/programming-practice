
class Marvellous 
{
    public int No1;  //class chi characteristic
    public int No2;

    public void fun()  //This is Behaviour
    {
        System.out.println("Inside fun");
    }
}


class Encapsulation
{
    public static void main(String A[])
    {
        Marvellous mobj = new Marvellous();

        mobj.fun();

        System.out.println(mobj.No1);
        System.out.println(mobj.No2);
    }
}


// javac Encapsulation.java --creates class files
// java Encapsulation.java