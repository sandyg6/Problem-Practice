import java.util.*;

public class PalindromeNumber {
    static int isPalindrome(int num){
        int rev =0;
        while (num>0) {
            rev = rev*10 +num%10;
            num/=10;
        }
        return rev;
    }
    public static void main(String[] args) {
        System.out.println("Enter a number:");
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        if(isPalindrome(number)==number){
            System.out.println("Palindromic Number");
        }
        else{
            System.out.println("Not a Palindromic Number");
        }
        sc.close();
    }
    
}
