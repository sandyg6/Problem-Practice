import java.util.Scanner;

public class SternSeries{
    public static void main(String[] args) {
        int n;
        System.out.println("Enter a number:");
        Scanner sc = new Scanner(System.in);
        n=sc.nextInt();
        int l=1,u=n;
        for(int i=0;i<n;i++){
            System.out.print(l+" "+u+" ");
            l+=1;
            u-=1;
        }
        sc.close();
    }
}