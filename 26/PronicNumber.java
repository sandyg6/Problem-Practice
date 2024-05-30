import java.util.Scanner;
import java.math.*;

public class PronicNumber {
    static boolean checkPronic(int n){
        for(int i=1;i<Math.sqrt(n);i++){
            if(i*(i+1)==n)
                return true;
        }
        return false;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        System.out.println("Enter a number:");
        if(checkPronic(n)){
            System.out.println("The given number is Pronic");
        }
        else{
            System.out.println("The given number is not Pronic");
        }
        sc.close();
    }    
}
