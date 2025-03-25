import java.util.Scanner;

public class halfpyramidincreasingpattern {
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
            System.out.println();
            
        }

        sc.close();
    }
}
