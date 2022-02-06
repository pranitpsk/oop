/*Assume that an object represents an employee report that contains information like employee id, total bonus, total overtime in a particular year. Use an array of objects to represent n employees' reports. Write a program that displays the report. Use setpara() member function to set report attributes by passing the arguments and member function displayreport() to show the report according to the parameter passed. Display the report in the following format.

An employee with ... ... ... has received Rs ... ... ...as a bonus

and

had worked ... ... ... hours as overtime in the year ... ... ...*/

#include<iostream>
using namespace std;
class employee{
    private:
    int empid;
    int bonus,ot;
    public:
     void setpara()
     {
         cout<<"Enter the emp id";
         cin>>empid;
         cout<<"Enter the bonus";
         cin>>bonus;
         cout<<"Enter the overtime ";
         cin>>ot;

     }
     void displayreport()
     {
         cout<<"An employee with employee id "<<empid<<" has received Rs "<<bonus<<" as a bonus"<<endl;
         cout<<"and"<<endl<<"had worked "<<ot<<" hours as overtime in a year ... ... ..."<<endl<<endl<<endl;
     }
};
int main()
{
    employee e[30];
    int n,i;
    cout<<"Enter the no. of employee for details";
    cin>>n;
    for(i=0;i<n;i++)
    {
        e[i].setpara();
        cout<<endl<<endl<<endl<<"Data of employee: "<<i+1<<endl;
        e[i].displayreport();
        
    }
    return 0;    
}