package fosalgo;
import java.util.Scanner;
public class DeretAritmatika {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sn = 0;
        for(int i=1;i<=n;i++){
            sn = sn + i;
            if(i>1){
                System.out.print(" + ");
            }
            System.out.print(i);
        }
        System.out.println(" = "+sn);
    }
}
