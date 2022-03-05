public class JavaSetPriorityExp4 extends Thread
{  
    public void run()
    {  
        System.out.println("running...");  
    }  
    public static void main(String args[])
    {  
        // creating one thread 
        JavaSetPriorityExp4 t1=new JavaSetPriorityExp4();  
        JavaSetPriorityExp4 t2=new JavaSetPriorityExp4();
        // set the priority
        t1.setPriority(5);
        t2.setPriority(8);
        // print the user defined priority 
        System.out.println("Priority of thread t1 is: " + t1.getPriority()); //4
        System.out.println("Priority of thread t2 is: " + t2.getPriority()); //7
        // this will call the run() method
        t1.start();
    }
}