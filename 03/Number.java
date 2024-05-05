import java.util.*;
class Number{
    public static void main(String[] args) {
        int num,flag=0,rem;
        System.out.println("Enter a number:");
        Scanner sc = new Scanner(System.in);
        num=sc.nextInt();
        while(num>0){
            rem = num%10;
            if(rem==0){
                flag=1;
            }
            num/=10;
        }
        if(flag==1){
            System.out.println("Duck number");
        }
        else{
            System.out.println("Not a duck number");
        }
        sc.close();
        
    }
}