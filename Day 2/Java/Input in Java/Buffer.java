import java.io.*; //This * indicates that we want to use all packages in io package

public class Buffer 
{
    public static void main(String[] args)throws IOException {
        //BufferedReader Expect To Read From Stream Of Character
        //System.in Take input as stream of Bytes 
        //INput Stream Reader Convert Stream OF Bytes To Stream Of Character
        //Now It has no problem reading the string
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter A String :");

        //USing Readline Function We Can Read Sequence Of Character
        //We Created a string object S
        String s = br.readLine();

        System.out.println("You Entered : "+ s); 

    }
    
}
