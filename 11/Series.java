import java.util.Scanner;

public class Series {
    public static void main(String[] args) {
        System.out.println("Enter a number: ");
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        int result = 0;
        for(int i=1;i<=number;i++){
            result+=i;
            System.out.print(result+" ");
        }
    }
}

