import java.util.*;

public class hollowrectanglepatterm {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the value of rows:");
        int n=sc.nextInt();
        System.out.print("Enter the value of columns:");
        int m=sc.nextInt();
        //outer loop for no of lines
        for(int i=1;i<=n;i++){
            //inner loop for stars
            for(int j=1;j<=m;j++){
                if(i==1 || j==1 || i==n || j==m) System.out.print("*");
                else System.out.print(" ");
            }
            System.out.println();
            
        }

        sc.close();
    }
}
