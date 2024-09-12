import java.util.*;

public class modularArithmetic {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        int m = scan.nextInt();
        System.out.println((a*b)%m);
        System.out.println(((a%m)*(b%m))%m);
        scan.close();
    }
}
