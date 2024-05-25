#include<iostream>
using namespace std;
class flight
{
    private:
    int flightno;
    char destination[30];
    float distance,fule;
    int calfuel();

    public:
    void feedinfo();
    void showinfo();
};
int flight:: calfuel()
 {
    if(distance<=1000)
    {
        return 500;
    }
    else if(distance<=2000)
    {
        return 1100;
    }
    else
    {
        return 2200;
    }
 }
 void flight::feedinfo()
 {
    cout<<"\n enter the flight number:";
    cin>>flightno;
    cout<<"\n enter the distinatioin:";
    cin>>destination;
    cout<<"\n enter the distance:";
    cin>>distance;
    fule=calfuel();
 }
 void flight::showinfo()
 {
     cout<<"flightno:"<<flightno<<endl;
    cout<<"distinatioin<:"<<destination<<endl;
    cout<<"distance:"<<distance<<endl;
    cout<<"fule:"<<fule<<endl;
 }
 int main()
 {
    flight f1;
    f1.feedinfo();
    f1.showinfo();
 }