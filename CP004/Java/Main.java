package fosalgo;

public class Main {
    public static void main(String[] args) {
        System.out.println("FOR TO");
        //FOR TO
        for(int i=-23;i<=10;i+=4){
            System.out.print(i+" ");
        }
        
        System.out.println("\nFOR DOWN TO");
        //FOR DOWN TO
        for(int i= 16;i>=1;i-=3){
            System.out.print(i+" ");
        }
        
        System.out.println("\nFOR TO");
        double A[] = {1,3,6,2,8,9,15};//ini arraynya - larik
        
        for (int i = 0; i < A.length; i++) {
            System.out.print(A[i]+" ");
        }
                
        System.out.println("\nFOR EACH");
        for(double nilai:A){
            System.out.print(nilai+" ");
        }
    }
}
