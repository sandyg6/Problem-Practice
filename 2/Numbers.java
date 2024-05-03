import java.util.*;

public class Numbers{
    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number:");
        int number = sc.nextInt();
        int rem,count = 0;
        while(number>0){
            rem = number%10;
            count+=1;
            number/=10;
        }
        System.out.println("Digit count: "+count);
        sc.close();
    }
}