import java.util.Scanner;

public class gcd {
    public static void printGcd(int n1,int n2){
        while(n1!=n2){
            if(n1>n2) n1=n1-n2;
            else n2=n2-n1;
        }
        System.out.println("gcd is:"+n2);
        return;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("enter the n1:");
        int n1=sc.nextInt();
        System.out.print("enter the n2:");
        int n2=sc.nextInt();
        printGcd(n1,n2);
        sc.close();
    }
}
