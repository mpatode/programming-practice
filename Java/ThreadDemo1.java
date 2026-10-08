class ThreadDemo1
{

    public static void main (String A[])
    {
        System.out.println("Indise main");

        Thread t = Thread.currentThread();
        System.out.println("Current thread name is: " + t.getName());

        System.out.println("Current thread ID is: " + t.getId());

        System.out.println("Thread is alive or not : "+ t.isAlive());

        System.out.println("Thread priority is : "+t.getPriority());

    }

}