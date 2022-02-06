// Write a program that displays the current monthly salary of chief executive officer, information officer, and system analyst, programmer that has been increased by 9, 10, 12, and 12 percentages respectively in year 2010. Let us assume that the salaries in year 2009 are

// Chief executive officer Rs. 35000/m

// Information officer Rs. 25000/m

// System analyst Rs. 24000/m

// Programmer Rs. 18000/m

// Make a function that takes two arguments; one salary and the other increment. Use proper default argument.

#include<iostream>
#include<cmath>
using namespace std;
double incsal(double salary,double rate);
int main()
{
  cout<<"The incremented salary of cheif executive officier is :"<<incsal(35000,9)<<endl;

  cout<<"The incremented salary of information officier is :"<<incsal(25000,10)<<endl;

  cout<<"The incremented salary of system analyst is :"<<incsal(24000,12)<<endl;

  cout<<"The incremented salary of programmer is :"<<incsal(18000,12)<<endl;
  
  return 0;  
}
double incsal(double salary,double rate)
{
  return (salary+((rate*salary)/100));
}
