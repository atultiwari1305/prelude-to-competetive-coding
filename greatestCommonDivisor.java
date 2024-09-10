import java.util.*;

public class greatestCommonDivisor {
        
    static int gcd(int a, int b){
        if(a==0){
            return b;
        }
        return gcd(b%a, a);
    }

    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the two numbers: ");
        int a = scan.nextInt();
        int b = scan.nextInt();
        System.out.println(gcd(a,b));
        scan.close();
    }
}
