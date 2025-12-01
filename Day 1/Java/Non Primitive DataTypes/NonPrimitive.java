class Point
{    //Here is a point class
    int x; //Here it has two member or data members x and y
    int y;

}
//Any DataTypes which is created by classes is Non Primitive
class NonPrimitive  //Non Primitive Datatypes 
{
    public static void main(String[] args) 
    {
        Point p = new Point(); //Here p is object it is non -primitve
        p.x  = 10; //Here we are accessing x member object using object and dot operator and assingning value 10 and 20a
        p.y = 20;

        System.out.println(p.x + " " + p.y );


    }    
}
