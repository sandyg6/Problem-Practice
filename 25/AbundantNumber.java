import java.util.Scanner;

public class AbundantNumber {
    static int checkAbundant(int n){
        int sum=0;
        for(int i=1;i<n;i++){
            if(n%i==0){
                sum+=i;
            }
        }
        return sum;
    }
    public static void main(String[] args) {
        System.out.println("Enter a number:");
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int num = checkAbundant(n);
        if(num>n){
            System.out.println("The given number is Abundant");
        }
        else{
            System.out.println("The given number is not Abundant");
        }
        sc.close();
    }
}
