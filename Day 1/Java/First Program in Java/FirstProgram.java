//Java Hello World Program
//In Java Every Program you write has to be part of class
//In Java Program it is collection of classes
//public class FirstProgram name of the class is FirstProgram
//Here We Have Declared and Defined Class
public class FirstProgram
{
    /*This is where the execution of program begins */

    //Here we have made the main method Public since JVM needs to be 
    //run or implemented outside of this class or package hence we have use
    //the access specifier public
    //Here we have made the main method to be static since static allow
    //us main method to be called without creating object of the class FirstProgram
    //and main method must be called first 
    //main is made  static because jvm does'nt want to create object of the class 
    //void is the return type of java
    //String args[]  is array of String Object  and args is just the name of the array
    //Here Java decided to have Argument as Array Of string
    //Typically we do not use string args[] very much
    public static void main(String args[])
    {
        System.out.println("Hello world");
        //System is predefined Java Class
        //Out is an Object inside the System Class
        //out is an object of printStream Class 
        //println is method of printStream Class it is used to print
        //something to the screen
    }
}