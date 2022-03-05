
package constructor;


public class Constructor {

    
    public static void main(String[] args) {
        
        System.out.println("Constrcutor practice");
        Box mybox1 = new Box();
        mybox1.volume();
        Box mybox2 = new Box(10, 10, 10);
        mybox2.volume();
        
    }
    
}
