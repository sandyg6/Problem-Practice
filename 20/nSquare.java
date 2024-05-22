import java.util.Scanner;

public class nSquare{
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter range:");
        int n= sc.nextInt();
        int sum_of_n_square = ((n*(n+1)*(2*n+1))/6);
        System.out.println("The sum of square of first "+n+" Natural numbers is "+sum_of_n_square);
        sc.close();
    }
}
