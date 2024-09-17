import java.util.Scanner;

public class modularMultiplicativeInverse {

    static int modInverse(int a, int m){
        int x;
        for(x=1;x<m;x++){
            if(((a%m)*(x%m))%m == 1) return x;
        }
        return -1;
    }

    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int m = scan.nextInt();
        int x = modInverse(a, m);
        System.out.println(x);
        scan.close();
    }
}
