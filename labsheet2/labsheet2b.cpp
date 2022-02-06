// Write a program using the function overloading that converts feet to inches. Use function with no argument, one argument and two arguments. Decide yourself the types of arguments. Use pass by reference in any one of the function above.

#include<iostream>
using namespace std;
int f_into_i(int feet=2,int inch=12)
{
    return (feet*inch);
}
int &fintoi(int &x)
{
    x=x*12;
}

int main()
{
    int no;
   
   cout<<"conversion of feet into inch of no arguments= "<<f_into_i()<<" inches"<<endl;
   cout<<"conversion of feet into inch of one argument= "<<f_into_i(22)<< " inches"<<endl;
   cout<<"conversion of feet into inch of two argument= "<<f_into_i(22,12)<<" inches"<<endl;

   cout<<"user data"<<endl;
   cin>>no;
   fintoi(no);
   cout<<"Required result = "<<no;
   
   
   
   
    return 0;
}