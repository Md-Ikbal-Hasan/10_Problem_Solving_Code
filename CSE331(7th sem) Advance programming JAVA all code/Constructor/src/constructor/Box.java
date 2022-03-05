
package constructor;


public class Box {
    float width, height,depth;
    
    Box()
    {
        width = 7;
        height = 15;
        depth = 4;
        
    }
   
    Box(float w,float h, float d)
    {
        width = w;
        height = h;
        depth = d;    
    }
    
     void volume()
    {
        //float vol = width * height * depth;
        System.out.println( "The volume is:  " + (width * height * depth) );
    }
    
}
