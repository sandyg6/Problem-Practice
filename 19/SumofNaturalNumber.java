import java.util.Scanner;

class SumofNaturalNumber {
    public static void main(String[] args) {
        System.out.println("Enter the range till which the sum of Natural Numbers need to be printed: ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sum_of_Natural = (n*(n+1))/2;
        System.out.println("The sum of "+" Natural numbers is " + sum_of_Natural);
        sc.close();
    }
    
}