// Write a simple program that converts the temperature in Celsius scale to Fahrenheit scale and vice versa using the basic concept of class and object. Make separate classes for Celsius and Fahrenheit which will have the private members that hold the temperature value and make conversion functions in each class for conversion from one to another. For example, you need to have a function toFahrenheit() in class Celsius that converts to Fahrenheit scale and returns the value.

#include<iostream>
using namespace std;
class celcius{
    private:
        float deg_c;
    public:
        float setvalue(float c)
        {
            deg_c=c;
        }
        float tofarenheit()
        {
            return ((1.8*deg_c)+32);
        }

};
class farenheit{
    private:
        float deg_f;
    public:
        float setvalue(float f)
        {
            deg_f=f;
        }
        float tocelcius()
        {
            return (10*deg_f-320)/18;
        }
};
int main()
{
    float c,f;
    cout<<"Enter the temperature in degreee celcius "<<endl;
    cin>>c;
    cout<<"Enter the temperature in degree farenheit"<<endl;
    cin>>f;
    celcius c1;
    c1.setvalue(c);
    cout<<"Conversion of celsius into farenheit is :"<<c1.tofarenheit()<<endl;
    farenheit f1;
    f1.setvalue(f);
    cout<<"Conversion of farenheit into celcius is:"<<f1.tocelcius();
    return 0;
}