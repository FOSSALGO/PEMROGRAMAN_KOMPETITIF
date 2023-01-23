import java.util.Scanner;
public class Sigma03 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            // int elemen = sc.nextInt();
            // sum = sum + elemen;
            sum = sum + sc.nextInt();

        }
        System.out.println(sum);
    }
}
