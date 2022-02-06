// Write a function that passes two temperatures by reference and sets the larger of the two numbers to a value entered by user by using return by reference.
#include<iostream>
using namespace std;
int &func(int &a,int &b);
int main()
{
    int a,b;
    cout<<"\n Enter the temperature first and second:"<<endl;
    cin>>a>>b;
    func(a,b);
    cout<<"first temperature="<<a<<"second temperature="<<b<<endl;
    return 0;
}
int &func(int &a, int &b)
{
    if(a>b)
    return a=100;
    else
    return b=100;
}