class Point
{    //Here is a point class
    int x; //Here it has two member or data members x and y
    int y;

}
//Any DataTypes which is created by classes is Non Primitive
class References  //Non Primitive Datatypes 
{
    public static void main(String[] args) 
    {
        Point p1 = new Point(); //Here p1 is object and p1 holds a reference
        //to Object of Point class refernce variables are used to point object of class
        p1.x = 10;//Now here p1 holds referene to data member 
        p1.y = 20;//x and y and assing value x 10 y 20
        Point p2 = p1; //Here we have created a reference variable p2
        //p2 points also point to object of Point class
        //But here we have assigned p2 = p1 
        //After this statement p1 which is a reference variable which refer 
        //to the memory location of x and y
        //Now p2 also start referring to the same memory location of p1 

        p2.x = 30; //Now after this p2.x  if we print the value we get 30
        //But now if we were to check p1.x value it will be also 30
        //Because both refer to same memory location 
        // Because both are referring to same memory location
        System.out.println(p1.x);
        System.out.println(p2.x);


    }    
}
