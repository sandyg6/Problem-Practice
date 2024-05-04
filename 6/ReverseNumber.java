import java.util.*;

public class ReverseNumber {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number:");
        int number = sc.nextInt();
        int rev = 0;
        while(number>0){
            int rem = number%10;
            rev = rev*10 + rem;
            number/=10;
        }
        System.out.println("The reversed number is "+ rev);
        sc.close();
    }
}
