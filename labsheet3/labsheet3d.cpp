// Write a program with classes to represent a circle, rectangle, and triangle. Each class should have data members to represent the actual objects and member functions to read and display objects, find perimeter and area of the objects, and other useful functions. Use the classes to create objects in your program.
 #include<iostream>
 #include<cmath>
 using namespace std;
 class circle{
     private:
     float r,pi=3.14;
     public:
     void setdata(float x)
     {
        r=x;
     }
     float perimeter()
     {
         return (2*pi*r);
     }
     float area()
     {
         return pi*r*r;
     }
 };
 class rectangle{
     private:
     double len,bre;
     public:
     void setdata(int l,int b){
         len=l;
         bre=b;
     }
     double perimeter()
     {
         return 2*(len+bre);
     }
     double area()
     {
         return len*bre;
     }
 };
 class triangle{
     private:
     double a,b,c,s;
     public:
     void setdata(int leng,int bread,int hypo)
     {
         a=leng;
         b=bread;
         c=hypo;
         s=(a+b+c)/2;
     }
     double perimeter()
     {
         return 2*s;
     }
     double area()
     {
         return sqrt(s*(s-a)*(s-b)*(s-c));
     }
 };
 int main()
 {
     float rad;
     cout<<"Enter the radius for circle"<<endl;
     cin>>rad;
     circle c1;
     c1.setdata(rad);
     cout<<"The perimeter is: "<<c1.perimeter()<<" and the area is "<<c1.area()<<endl;

     cout<<"Enter the lenght and breadth for rectangle:"<<endl;
     double x,y;
     cin>>x>>y;
     rectangle r1;
     r1.setdata(x,y);
     cout<<"The perimeter is: "<<r1.perimeter()<<" and the area is "<<r1.area()<<endl;

     cout<<"Enter the three sides of triangle:"<<endl;
     double e,f,g;
     cin>>e>>f>>g;
     triangle t1;
     t1.setdata(e,f,g);
     cout<<"The perimeter is: "<<t1.perimeter()<<" and the area is "<<t1.area()<<endl;
     return 0;     
 }