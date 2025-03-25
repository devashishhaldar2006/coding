import java.util.*;
public class switchbutton {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("ENTER A OPTION:");
        int pedo=sc.nextInt();
        switch(pedo){
            case 1:System.out.println("ayee kudha");
            break;
            case 2:System.out.println("aye god");
            break;
            case 3:System.out.println("oh man bhagwan");
            break;
            default: System.out.println("deva");
            break;
        }
        sc.close();

    }
}
