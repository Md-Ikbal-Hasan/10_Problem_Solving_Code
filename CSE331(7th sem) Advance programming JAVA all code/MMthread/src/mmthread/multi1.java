/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mmthread;

/**
 *
 * @author Clara
 */
public class multi1 extends Thread{
    public void start()
    {
        for(int i=1; i<10; i++)
        {
            System.out.println("\t From Thread i = "+i);
        }
    }
    
}
