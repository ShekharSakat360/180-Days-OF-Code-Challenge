/**
 * Autoboxing
 */
public class Autoboxing 
{
    public static void main(String[] args) 
    {
        //Autoboxing
        int x1 =10;
        Integer x2 = x1;
        //Autoboxing means see we first had an integer variable
        //x1 = 10 and  x2 refer to memory location of x1 and x1
        //actually holds the value
        //Autoboxing means see we first had an integer variable
        //x1 = 10 and then we assigned integer variable to 
        //Integer Wrapper Class or Non Primitive Datatype than it
        //is called Autoboxing
        //It means you had an integer value = 10 and we boxed 
        //into Integer object or reference it is called Autoboxing
        //We are Boxing or assigning Integer value to Integer Object
        //When you assign a Integer Object or any wrapper class
        //Object or Reference Variable it is called AutoBoxing

        int x3 = x2; // AutoUnboxing
        //When You boxed an Integer object to Integer value it
        //is called AutoUnboxing
        //When you assign a reference Variable of Wrapper class to 
        //primitive variable it is called AutoUnboxing

        //Here we are assigning non primitive reference to PRimitive
        //Integer Variable it is called AutoUnboxingD

        System.out.println(x1);
        System.out.println(x2);
        System.out.println(x3);


    }
    
}