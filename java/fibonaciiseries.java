import java.util.Scanner;

public class fibonaciiseries {
    public static void printFibonacci(int n){
        int a=0,b=1;
        System.out.println(a+" ");
        if(n>0){
            for(int i=2;i<=n;i++){
                System.out.println(b+" ");
                //swapping
                int temp=b;
                b=a+b;
                a=temp;
            }
            System.out.println();
        }
        return;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("enter the n:");
        int n=sc.nextInt();

        printFibonacci(n);
        sc.close();
    }
}
