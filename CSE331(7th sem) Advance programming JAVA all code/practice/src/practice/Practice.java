
package practice;

import java.util.Scanner;


public class Practice {

    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);  //for read values.....
        
        int x,y;
        float a,b;
        double p,q;
        char letter1 , letter2;
        String str1,str2;
        
        System.out.print("Enter two integer number: ");
        x = input.nextInt();
        y = input.nextInt();
        System.out.println(x);  
        System.out.println(y);
        
         System.out.print("Enter two float number: ");
         a = input.nextFloat();
        b = input.nextFloat();
        System.out.println(a + " " + b);  
        
        System.out.print("Enter two double number: ");
         p = input.nextDouble();
        q = input.nextDouble();
        System.out.println(p + " " + q);  
        
        
       System.out.print("Enter two string: ");
         str1 = input.nextLine();
          str2 = input.nextLine();
        System.out.println(str1 + " " + str2); 
        
        
         
    }

    
    
}
