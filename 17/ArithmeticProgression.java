import java.util.Scanner;
class ArithmeticProgression {
    public static void main(String[] args) {
        int a,d,n,last;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the first number of AP:");
        a = sc.nextInt();
        System.out.println("Enter the difference of each number in AP:");
        d = sc.nextInt();
        System.out.println("Enter the number of terms of AP need to be printed:");
        n = sc.nextInt();
        
        last = a + (n-1)*d;
        
        System.out.println("The Arithmetic progression:");
        for(int i = a; i<= last ; i=i+d){
            System.out.print(i+" ");
        }
        sc.close();
    }
}
