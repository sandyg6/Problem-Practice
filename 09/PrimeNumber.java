import java.util.Scanner;
public class PrimeNumber {
    static int isPrime(int num) {
        int divisors = 0;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                divisors += 1;
            }
        }
        return divisors;
    }
    public static void main(String[] args) {
        System.out.println("Enter a number:");
        Scanner sc= new Scanner(System.in);
        int number= sc.nextInt();
        if (number == 1) {
            System.out.println("Neither a Prime nor a Composite number");
        } else if (isPrime(number)!=0) {
            System.out.println("Not a Prime number");
        }
        else {
            System.out.println("Prime Number");
        }
        sc.close();
    }
}
