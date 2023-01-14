package fosalgo;
import java.util.Scanner;
public class Main {
    
    public static void main(String[] args) {
        int a, b;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        int lower = a + 1;
        int upper = b - 1;
        if (b < a) {
            lower = b + 1;
            upper = a - 1;
        }
        for (int i = lower; i <= upper; i++) {
            System.out.print(i+" ");
        }
    }
}
