// Write a program to set a structure to hold a date (mm,dd and yy), assign values to the members of the structure and print out the values in the format 11/28/2004 by function. Pass the structure to the function

#include<iostream>
using namespace std;
struct date
{
    int mm,dd,yy;
};
void displays(date d1 );

int main()
{
    date d1;
    cout<<"Enter the today's date in month/day/year";
    cin>>d1.mm>>d1.dd>>d1.yy;
    displays(d1);
    return 0;
}
void displays( date d1)
{
    cout<<d1.mm<<"/"<<d1.dd<<"/"<<d1.yy<<endl;
}