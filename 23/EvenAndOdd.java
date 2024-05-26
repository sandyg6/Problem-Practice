import java.util.Scanner;

public class EvenAndOdd {
    public static void main(String[] args) {
        int start, end;
        System.out.println("Enter the range: ");
        try(Scanner sc = new Scanner(System.in)){
            start = sc.nextInt();
            end = sc.nextInt();
            System.out.println("Even Numbers:");
            for(int i = start;i<=end;i++){
                if(i%2 == 0){
                    System.out.print(i+" ");
                }
            }
            System.out.println("Odd Numbers:");
            for(int i = start;i<=end;i++){
                if(i%2 == 1){
                    System.out.print(i+ " ");
                }
            }
            sc.close();
        }
    }    
}
