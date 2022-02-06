// 6.	Create a class with a data member to hold a "serial number" for each object created from the class. That is, the first object created will be numbered 1, the second 2, and so on by using the basic concept of static data members. Use static member function if it is useful in the program. Otherwise, make a separate program that demonstrates the use of static member function.



#include<iostream>
using namespace std;
class studclass
{
private:

static int a;
int b=0;

public:

studclass()
{
    a++;
    b=a;
}

void display()
{
cout<<"\n serial number is:"<<b<<endl;
cout<<"\n Total number of object is:"<<a<<endl;

}
};
int studclass::a=0;

int main()
{

    studclass c1,c2,c3,c4;
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    return 0;
}