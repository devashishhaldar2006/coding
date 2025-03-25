import java.util.Scanner;

public class butterflypattern {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the value of rows:");
        int n=sc.nextInt();
        //outer loop for no of lines
        for(int i=1;i<=n;i++){
            //inner loop for stars
            for(int j=1;j<=i;j++){
                System.out.print("*");
            }
            int spaces=2*(n-i);
            for(int j=1;j<=spaces;j++){
                System.out.print(" ");
            }
            for(int j=1;j<=i;j++){
                System.out.print("*");
            }
            System.out.println();
            
        }
        //reverse the code
        for(int i=n;i>=1;i--){
            //inner loop for stars
            for(int j=1;j<=i;j++){
                System.out.print("*");
            }
            int spaces=2*(n-i);
            for(int j=1;j<=spaces;j++){
                System.out.print(" ");
            }
            for(int j=1;j<=i;j++){
                System.out.print("*");
            }
            System.out.println();
            
        }

        sc.close();
    }
}
