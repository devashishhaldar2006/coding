import java.util.Scanner;

public class functionsbasics {
    public static void returnMyName(String name){
        System.out.println(name);
        return;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String name=sc.next();
        returnMyName(name);
        sc.close();
    }

}
