import java.util.Scanner;
public class Sigma02 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int U[] = new int[n];
        int sum =0;
        for (int i = 0; i < n; i++) {
            U[i] = sc.nextInt();
            sum = sum + U[i];
        }        
        System.out.println(sum);
    }
}
