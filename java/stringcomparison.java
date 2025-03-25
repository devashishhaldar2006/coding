import java.util.*;
public class stringcomparison {
    public static void main(String[] args) {
        String s1="randiatyant";
        String s2="randishubh";
        // s1>s2 +ve value
        // s1=s2 0
        // s1<s2 -ve value
        if(s1.compareTo(s2)==0){
            System.out.println("s1 and s2 are equal");
        }
        if(s1.compareTo(s2)<0){
            System.out.println("s1 is smaller than s2 in size");
        }
        if(s1.compareTo(s2)>0){
            System.out.println("s1 is greater in size than s2");
        }
                
                       
        
    }
}
