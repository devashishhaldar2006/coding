import java.util.Scanner;

public class factorialbyfunctions {
    public static void printFactorial(int k){
        int product=1;
        if(k<0){
            System.out.println("invalid input");
            return;
        }
        if(k==0){
            System.out.println(product);
            return;
        }
        else{
            for(int i=k;i>=1;i--){
                product=product*i;
            }
            System.out.println(product);
            return;
        }
        
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("enter a number:");
        int k=sc.nextInt();
        printFactorial(k);
        sc.close();
    }
}
