import java.util.Scanner;
class MaxMinNum {
    public static void main(String[] args) {
        int num1,num2;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two numbers: ");
        num1 = sc.nextInt();
        num2 = sc.nextInt();
        int max,min;
        if (num1>num2){
            max=num1;
            min=num2;
        }
        else{
            max=num2;
            min=num1;
        }
        System.out.println("The maximum number is "+max);
        System.out.println("The minimum number is "+min);
        
    }
}
