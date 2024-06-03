#include<iostream>
using namespace std;
class area
{
   public:
   int shape()
   {
    cout<<"basic fun called:"<<endl;
    }
    int shape(int a)
    {
        cout<<"area of squre:"<<a*a<<endl;
    }
    int hello(double a)
    {
         cout<<"area of circle:"<<3.14*a*a<<endl;
    }
     int shape(int a,int b)
    {
         cout<<"area of rectangle:"<<a*b<<endl;
    }
};
int main()
{
    area a;
    a.shape(3,4);
}