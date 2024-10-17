import java.util.Scanner;

public class modularExponentiation {
    
    static int power(int x, int y, int p){
        int res = 1;
        x %= p;
        if(x == 0) return 0;
        while(y > 0){
            if((y & 1) == 1){
                res = (res*x) % p;
            }
            y = y>>1;
            x = (x*x) % p;
        }
        return res; 
    }

    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int x = scan.nextInt();
        int y = scan.nextInt();
        int p = scan.nextInt();
        int m = power(x, y, p);
        System.out.println(m);
        scan.close();
    }
}
