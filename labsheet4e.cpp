// 5.	Write a program that illustrates the following relationship and comment on them. 
// i) const_object.non_const_mem_function
// ii) const_object.const_mem_function
// iii) non_const_object.non_const_mem_function
// iv) non_const_object.const_mem_function

#include<iostream>
using namespace std;
class program
{
private:
const int a;  //const object is declared as the integer a
public:
program(int x):a(x)//program constructor with argument int x is declared and a=x 
{

}
void func1()  //func 1 is declared and defined and it is not const function ie const obj & non const function
{
    cout<<"\n value of a :"<<a<<endl;
}
void func2() const //constant function func2 is defined and declared i.e const object and const function
{
    cout<<"\n value of a:"<<a<<endl;
}


};
int main()
{
program p1(1);
p1.func1();
p1.func2();
const program p2(2);
p2.func2();  //const object can only access the const function


    return 0;
}
