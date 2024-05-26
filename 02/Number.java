import java.util.*;

public class Number{
    public static void main (String[] args)
    {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter a number:");
            int number = sc.nextInt();
            int count = 0;
            while(number>0){
                count+=1;
                number/=10;
            }
            System.out.println("Digit count: "+count);
        }
    }
}