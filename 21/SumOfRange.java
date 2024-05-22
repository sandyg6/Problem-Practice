import java.util.Scanner;

public class SumOfRange {
    public static void main(String[] args) {
        int start,end;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter start range:");
        start = sc.nextInt();
        System.out.println("Enter end range:");
        end = sc.nextInt();
        int first = start*(start-1)/2;
        int last = end*(end+1)/2;
        int sum_of_numbers = last-first;
        System.out.println("The sum of numbers within the range "+start+" and "+end+" is "+sum_of_numbers);
        sc.close();
    }
}
