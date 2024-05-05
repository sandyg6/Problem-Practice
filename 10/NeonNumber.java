import java.util.Scanner;

public class NeonNumber {
    static int isNeon(int number){
        int sqnum = number*number;
        int SumofDigits=0;
        while(sqnum>0){
            SumofDigits+= sqnum%10;
            sqnum/=10;
        }
        return SumofDigits;
    }

    public static void main(String[] args) {
        System.out.println("Enter a number:");
        Scanner sc= new Scanner(System.in);
        int num= sc.nextInt();
        if(isNeon(num)==num){
            System.out.println("Neon Number");
        }
        else{
            System.out.println("Not a Neon Number");
        }
    }
}
