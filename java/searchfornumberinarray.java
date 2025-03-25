import java.util.Scanner;

public class searchfornumberinarray {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("enter no of elements:");
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        System.out.print("enter the number u want to search boiii:");
        int m=sc.nextInt();
        for(int i=0;i<n;i++){
            if(arr[i]==m){
                System.out.println("the value has been found on index "+i+" boisssss");
                break;
            }
        }
        sc.close();   
        
    }
}
