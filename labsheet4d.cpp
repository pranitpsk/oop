// write a program assuming that the constructor initializes the data memeber say num vehicle,hour and rate. There should be 10% discount if num vehicle execeeds the 10. display the total charge. use two objects and show bit by bit copy of one object to another (make your own copy costructor)

#include<iostream>
using namespace std;
class vehicle
{
private:
int num_vehicle;
int hour;
float rate;
float charge;
public:
vehicle()  //default constructor with no argument
{
    num_vehicle=0;
    hour=0;
    rate=0;
    charge=0;
}
vehicle(int a,int b,float c)
{
    num_vehicle=a;
    hour=b;
    rate=c;

    //as per the question when vehicle exceeds 10 it gets 10% discount
    if(hour>10)
    {
        charge=hour*rate;
        charge=charge-0.1*charge;
    }
    else
    {
        charge=hour*rate;
    }
}

vehicle(vehicle& v1,vehicle& v2)
{
    cout<<"\n total charge of the vehicle 1 is:"<<v1.charge<<endl;
    cout<<"\n total charge of the vehicle 2 is:"<<v2.charge<<endl;
}

};

int main()
{
    vehicle v1(1123,14,23.23);
    vehicle v2(2312,6,34.43);
    vehicle v3(v1,v2);
    return 0;
}