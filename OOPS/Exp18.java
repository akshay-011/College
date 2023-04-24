import java.util.Scanner;

public class Exp18 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        System.out.printf("Enter a: ");
        int a = read.nextInt();
        System.out.printf("Enter b: ");
        int b = read.nextInt();
        System.out.printf("Enter c: ");
        int c = read.nextInt();
        int y=0;

        try {
            y = a/(b-c);
        }
        catch (ArithmeticException ae) {
            System.out.println("divided by zero");
        }
        finally{
            System.out.println("y = " + y);
        }
    }
}
