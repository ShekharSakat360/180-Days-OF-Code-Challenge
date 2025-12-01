public class AutoBoxingUnBoxing 
{
    public static void main(String[] args) 
    {
        Integer x1 = 400, x2 = 400;
        //The Reason it is not Same Because x1 and x2 are object 
        //they refer 
        //to different things they refer to Object of Same Class
        //But they refer to different things hence output is not same
        if(x1==x2)
            System.out.println("Same");
        else    
            System.out.println("Not Same");
        

    }
}
