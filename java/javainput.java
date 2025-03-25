import java.util.*;

public class javainput {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter a number:");

        int a = sc.nextInt();
        System.out.println(a); 

        sc.nextLine(); // Consume the leftover newline character
        System.out.print("enter a string:");

        String string = sc.nextLine(); // Now this will correctly wait for input
        System.out.println(string);

        sc.close(); // Close the scanner to prevent resource leaks
    }
}
