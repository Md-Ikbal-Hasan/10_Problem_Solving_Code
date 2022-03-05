
package looppractice;

import java.util.Scanner;

public class LoopPractice 
{

   
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
      /* loopexecute ob1= new loopexecute(5);
       ob1.show();
       operationinloop ob2 = new operationinloop();
       ob2.sum(10, 20);*/
      
      
        System.out.print("Enter number of row and column of matrix : ");
        int row,col;
        row = input.nextInt();
        col = input.nextInt();
        
        int sum = 0;
        int twodarr1[][] = new int[row][col];
        int twodarr2[][] = new int[row][col];
        int summation[][] = new int[row][col];
        System.out.println("Enter the first matrix: ");
       
        //input first matrix......
        for(int i=0; i<row; i++)
        {
            for(int j=0 ; j<col; j++)
            {
                twodarr1[i][j] = input.nextInt();
            }
           
        }
       System.out.println("Enter the second matrix: ");
      
       
       //input second matrix......
        for(int i=0; i<row; i++)
        {
            for(int j=0 ; j<col; j++)
            {
                twodarr2[i][j] = input.nextInt();
            }
           
        }
        //the summation process......
        for(int i=0; i<row; i++)
        {
            for(int j=0 ; j<col; j++)
            {
                summation [i][j] = twodarr1[i][j] + twodarr2[i][j];
            }
           
        }
        
        System.out.println("the sum of matrix: ");
        
        
        //output the sum of matrix......
        for(int i=0; i<row; i++)
        {
            for(int j=0 ; j<col; j++)
            {
                System.out.print(summation[i][j] + " ");
            }
            System.out.println();
                    
           
        }
        
        
    }
    
}
