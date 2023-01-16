package fosalgo;

import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        int a,b;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        if(a<b){
            System.out.println("MIN = "+a);
            System.out.println("MAX = "+b);
        }else{
            System.out.println("MIN = "+b);
            System.out.println("MAX = "+a);
        }
    }
}
