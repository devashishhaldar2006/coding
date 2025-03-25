import java.util.Scanner;

public class palindromicpyramid {
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
            for(int j=i;j>=1;j--){
                System.out.print(j);
            }
            for(int j=2;j<=i;j++){
                System.out.print(j);
            }
            System.out.println();
            
        }

        sc.close();
    }
}
