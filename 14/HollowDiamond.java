import java.util.Scanner;

public class HollowDiamond {
    public static void main(String[] args) {
        int n,cols,rows;
        System.out.println("Enter a number:");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        for(rows=1;rows<=n;rows++){
            for(cols=n;cols>rows;cols--){
                System.out.print(" ");
            }
            System.out.print("*");
            for(cols=1;cols< (rows-1)*2;cols++){
                System.out.print(" ");
            }
            if(rows == 1){
                System.out.print("\n");
            }
            else{
                System.out.print("*\n");
            }
        }

        for(rows = n-1;rows>=1;rows--){
            for(cols = n;cols>rows;cols--){
                System.out.print(" ");
            }
            System.out.print("*");
            for(cols = 1;cols<(rows-1)*2;cols++){
                System.out.print(" ");
            }
            if(rows==1){
                System.out.print("\n");
            }
            else{
                System.out.print("*\n");
            }
        }
        sc.close();
    }
}
