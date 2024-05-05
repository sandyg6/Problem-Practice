import java.util.*;

public class AutomorphicNumber {
    static int isAutomorphic(int num){
        int sqOfnum,lenOfnum = 0;
        sqOfnum = num*num;
        while (num>0) {
            lenOfnum+=1;
            num/=10;
        }
        int digitOfSq = sqOfnum % (int)Math.pow(10,lenOfnum);
        return digitOfSq;
    }
    public static void main(String[] args) {
        System.out.println("Enter a number:");
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        if(isAutomorphic(number)==number){
            System.out.println("Automorphic Number");
        }
        else{
            System.out.println("Not a Automorphic Number");
        }
        sc.close();
    }
}
