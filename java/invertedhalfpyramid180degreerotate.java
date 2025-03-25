import java.util.*;

public class invertedhalfpyramid180degreerotate {
        public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the value of rows:");
        int n=sc.nextInt();
        //outer loop for no of lines
        for(int i=1;i<=n;i++){
            //inner loop for stars
            for(int j=1;j<=n-i;j++){
                System.out.print(" ");
            }    
            //inner loop for stars
            for(int k=1;k<=i;k++){
                System.out.print("*");
            }
            
            System.out.println();
            
        }

        sc.close();
    }
}
