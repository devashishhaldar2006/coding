
import java.util.*;
public class rectanglebasicpattern {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the value of n:");
        int n=sc.nextInt();
        //outer loop for no of lines
        for(int i=1;i<=n;i++){
            //inner loop for stars
            for(int j=1;j<=n;j++){
                System.out.print("*");
            }
            System.out.println();
            
        }

        sc.close();
    }
    
    
}
