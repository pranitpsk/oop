// write a class that can store department id and department name with constructors to initialize its members. write destructor memeber of the same class and display the messege "object n goes out of the scope".your  program should be made such that the it should show the order of the constructor and destructor invocation

#include<iostream>
#include<cstring>
using namespace std;
class department
{
char name[30];
int depid;

public:
department()
{
    depid=0;
}
department(int x, char*y)
{
depid=x;
strcpy(name,y);
}
void display()
{
cout<<"\n Department id:"<<depid<<endl;
cout<<"\n department name:"<<name<<endl;
}
~department()
{
    cout<<"object"<<name<<"goes out of the scope"<<endl;
}
};

int main()
{
department d1(1,"pranit karki department");
d1.display();
return 0;

}