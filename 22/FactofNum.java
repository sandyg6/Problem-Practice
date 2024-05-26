import java.util.Scanner;

class FactofNum {
    public static void main(String[] args) {
        int n,fact=1;
        System.out.println("Enter a number:");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        for(int i=1;i<=n;i++){
            fact *= i;
        }
        System.out.println("The factorial of "+n+" is "+fact);
        sc.close();
    }
}