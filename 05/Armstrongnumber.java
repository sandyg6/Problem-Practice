import java.util.*;
public class Armstrongnumber {
    static int isArmstrong(int n, int c){
         int tot=0,rem;
        for(int i=0;i<c;i++){
        rem = n%10;
        int val = (int)Math.pow(rem, c);
        tot+=val;
        n/=10;
    }
    return tot;
    }
    
    public static void main(String[] args) {
        int num,count=0;
        System.out.println("Enter a number:");
        Scanner sc = new Scanner(System.in);
        num=sc.nextInt();
        int number=num;
        while(num>0){
            count+=1;
            num/=10;
        }
        int check = isArmstrong(number,count);
        if(check==number){
            System.out.println("Armstrong number");
        }
        else{
            System.out.println("Not a Armstrong number");
        }
        sc.close();
    }
}