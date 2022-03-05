
package looppractice;

public class operationinloop {
    
    int summation  = 0;
   void sum(int a, int b)
   {
       for(int i= a ;i<=b; i++)
       {
           summation  = summation  + i; 
       }
       System.out.println("the sum between " + a + " and " +b + " is " + summation);
   }
    
    
    
    
}
