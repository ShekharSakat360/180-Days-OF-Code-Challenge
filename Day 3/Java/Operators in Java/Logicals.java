import java.io.*;
import java.util.Scanner;  // Import the Scanner class

public class Logicals 
{ 

    public static void main(String[] args) throws IOException { 
        String user = "geek", pwd = "GEEK";
      
        Scanner sc = new Scanner(System.in);
      
        String iu = sc.nextLine();
        String ip = sc.nextLine();
      
        if(user.equals(iu) && pwd.equals(ip)) {
            System.out.println("Welcome");
        } else {
            System.out.println("Try Again");
        }
        sc.close();
    } 
}
