
package looppractice;

public class loopexecute {
    
    int x;
    
    loopexecute(int n)
    {
        x = n;
        System.out.println("x is "+x);
    }
     void show()
     {
         while(x>0)
         {
             if(x%2==0)
                 System.out.println(x + " is even");
             else
                 System.out.println(x + " is odd");
             x--;
         }
     }
    
    
    
}
