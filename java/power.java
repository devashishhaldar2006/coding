import java.util.Scanner;

public class power {
    public static void printPower(int x,int n){
        int result=1;
        for(int i=1;i<=n;i++){
            result=result*x;
        }
        System.out.println(result);
        return;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("enter the base:");
        int x=sc.nextInt();
        System.out.print("enter the power:");
        int n=sc.nextInt();
        printPower(x,n);
        sc.close();
    }
}
