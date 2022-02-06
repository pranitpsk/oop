// Assume that you want to check whether the number is prime or not. Write a program that asks for numbers repeatedly. When it finishes checking a number the program asks if the user wants to do another calculation. The response can be 'y' or 'n'. Don't forget to use the object-oriented concept.
#include<iostream>
using namespace std;
class prime{
    private:
    int number,res=0;
    public:
    void setvalue(int n)
    {
        number=n;
    }
    int intoprime()
    {
        for(int i=1;i<=number;i++)
        {
           if(number%i==0)
           {
               res++;
           }
        }
        return res;
    }
};
int main()
{
    int n;
    char c;
    prime p;
    cout<<"Enter the number to check..."<<endl;
    do{
        cin>>n;
        p.setvalue(n);
        if(p.intoprime()<=2)
        {
            cout<<"The number is prime...";
        }
        else
        cout<<"The number is not prime...";

        cout<<"Do you want to continue? If yes then enter 'Y' else enter 'N' for no"<<endl;
        cin>>c;



    }
    while(c=='Y'||c=='y');
    return 0;
}