import java.util.Scanner;

public class stringsbasics2 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a string:");
        String pikachu=sc.nextLine();//prints several words
        int m=pikachu.length();//prints length of string
        for(int i=0;i<m;i++){
            System.out.println(pikachu.charAt(i));//prints one one letter of string
        }
        sc.close();
    }
}
