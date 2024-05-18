import java.util.Scanner;
class SumofArithmeticProgression {
    public static void main(String[] args) {
        int a,d,n,sum_of_AP;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the first number of AP:");
        a = sc.nextInt();
        System.out.println("Enter the difference of each number in AP:");
        d = sc.nextInt();
        System.out.println("Enter the number of terms of AP need to be printed:");
        n = sc.nextInt();
        
        sum_of_AP = (n/2)*(2*a + (n-1)*d);
        
        System.out.println("The sum of Arithmetic progression: "+sum_of_AP );
        sc.close();
    }
}
