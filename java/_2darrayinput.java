import java.util.Scanner;

public class _2darrayinput {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("enter no of rows:");
        int rows=sc.nextInt();
        System.out.print("enter no of columns:");
        int cols=sc.nextInt();
        int arr[][]=new int[rows][cols];
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        System.out.println("after :");
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
        sc.close();   
        
    }
}
