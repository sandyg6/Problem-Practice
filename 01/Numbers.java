import java.util.*;

public class Numbers{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number:");
        int number = sc.nextInt();
        System.out.println("The extracted numbers are:");
        while(number>0){
            int rem = number%10;
            System.out.print(rem + " ");
            number/=10;
        }
        sc.close();
    }
}