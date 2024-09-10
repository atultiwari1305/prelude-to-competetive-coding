import java.util.Scanner;

public class extendedEuclid {

    static int extendedEuclidean(int a, int b, int[] x, int[] y) {
        if (a == 0) {
            x[0] = 0;
            y[0] = 1;
            return b;
        }

        int[] x1 = new int[1];
        int[] y1 = new int[1];
        int gcd = extendedEuclidean(b % a, a, x1, y1);

        x[0] = y1[0] - (b / a) * x1[0];
        y[0] = x1[0];

        return gcd;
    }

    public static void main(String[] args) {
        int a ,b;
        System.out.print("Enter the value of a and b: ");
        Scanner scan = new Scanner(System.in);
        a = scan.nextInt();
        b = scan.nextInt();
        int[] x = new int[1];
        int[] y = new int[1];
        int gcd = extendedEuclidean(a, b, x, y);
        System.out.println("GCD(" + a + ", " + b + ") = " + gcd);
        System.out.println("Coefficients x = " + x[0] + ", y = " + y[0]);
        scan.close();
    }
}
