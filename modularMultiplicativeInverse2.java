import java.util.Scanner;

public class modularMultiplicativeInverse2 {

    static int gcdExtended(int a, int m, int[] x, int[] y){
        if (a == 0) {
            x[0] = 0;
            y[0] = 1;
            return m;
        }

        int[] x1 = new int[1];
        int[] y1 = new int[1];
        int gcd = gcdExtended(m % a, a, x1, y1);

        x[0] = y1[0] - (m / a) * x1[0];
        y[0] = x1[0];

        return gcd;
    }

    static int modInverse(int a, int m){
        int[] x = new int[1]; 
        int[] y = new int[1];
        int g = gcdExtended(a, m ,x, y);
        if(g != 1){
            return -1;
        }
        else{
            return x[0];
        }
    }

    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int m = scan.nextInt();
        int x = modInverse(a, m);
        if(x<0) x+=m;
        System.out.println(x);
        scan.close();
    }
}
