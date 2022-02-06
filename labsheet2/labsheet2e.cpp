// Assume that employee will have to pay 10 percent income tax to the government. Ask user to enter the employee salary. Use inline function to display the net payment to the employee by the company.
#include<iostream>
 using namespace std;
 inline float empsal(float sala)
 {
     return (sala-(0.10*sala));
 }
 int main()
 {
     float salary;
     cout<<"Enter the salary in Rs:"<<endl;
     cin>>salary;
     cout<<"Salary after tax is :"<<empsal(salary);
     return 0;
 }