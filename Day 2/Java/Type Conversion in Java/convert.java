public class convert
{
    public static void main(String[] args) 
    {
        double d = 65.4;
        int i = (int) d; //Explicit
        char c = (char) i;

        System.out.println(i);
        System.out.println(c);
    }
}