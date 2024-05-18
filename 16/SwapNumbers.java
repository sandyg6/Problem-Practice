import java.util.Scanner;
class SwapNumbers {
    public static void main(String[] args) {
        int num1,num2;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two numbers: ");
        num1 = sc.nextInt();
        num2 = sc.nextInt();
        System.out.println("Before swapping:");
        System.out.println("number 1: "+num1);
        System.out.println("number 2: "+num2);
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
        System.out.println("After swapping:");
        System.out.println("number 1: "+num1);
        System.out.println("number 2: "+num2);
        sc.close();
    }
}
