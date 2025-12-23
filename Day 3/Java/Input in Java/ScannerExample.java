import java.util.Scanner;  // Correct import statement

public class ScannerExample  // Changed the class name to avoid conflict with the Scanner class
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter A String: ");
        // To Read A String
        String s = sc.nextLine();  // Changed Readline() to nextLine()

        System.out.println("You Entered A String: " + s);

        System.out.print("Enter A Integer: ");
        int x = sc.nextInt();  // Correct usage of nextInt()

        System.out.println("You Entered A Integer: " + x);

        System.out.print("Enter A Float: ");
        float f = sc.nextFloat();
        System.out.println("You Entered A Float: " + f);  // Fixed the print statement to say "Float"
        //You Need To Close the Scanner Object
        sc.close();
    }    
}
