// Create a class called carpark that has int data member for car id, int data member for charge/hour, and float data member for the parked time. Make functions to set data members and show the charges and parked hours of the corresponding car id. Make functions for setting and showing the data members. Member function should be called from other functions.

#include <iostream>
using namespace std;
class carpark{
    private:
    int car_id,cha_p_h;
    float time;
    public:
    void setdata(int x,int y,float z)
    {
        car_id=x;
        cha_p_h=y;
        time=z;
    }
    void showdata()
    {
        cout<<"Your car parking id is            --> "<<car_id<<endl;
        cout<<"The price per hour is             --> "<<cha_p_h<<endl;
        cout<<"Your parking hour is              --> "<<time<<endl;
        cout<<"Your total expenses on carpark is -->"<<(cha_p_h*time)<<endl;
    }
};
int main()
{
    int id,charge;
    float timw;
    cout<<"Enter the car id"<<endl;
    cin>>id;
    cout<<"Enter the price of car parked per hour"<<endl;
    cin>>charge;
    cout<<"Enter the parked time in hour"<<endl;
    cin>>timw;
    carpark obj1;
    obj1.setdata(id,charge,timw);
    obj1.showdata();
    

    return 0;   
}