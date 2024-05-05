import java.util.*;

public class Harshadnumber {
    public static void main(String[] args) {
        int num,total=0,rem;
        System.out.println("Enter a number:");
        Scanner sc = new Scanner(System.in);
        num=sc.nextInt();
        int n=num;
        while(num>0){
            rem = num%10;
            total+=rem;
            num/=10;
        }
        if(n%total==0){
            System.out.println("Harshad number");
        }
        else{
            System.out.println("Not a Harshad number");
        }
        sc.close();
    }
}