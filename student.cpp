#include<iostream>
using namespace std;
class student
{
    private:
    int a;
    public:
    int b;
    
    void setdata(int a1);
    void printdata()
    {
        cout<<a<<endl;
        cout<<b<<endl;

    }
};
 void student::setdata(int a1)
 {
    a=a1;
 }
 int main()
 {
    class student st1,st2;
    st1.b=10;
    st1.setdata(20);
    st1.printdata();

    st2.b=50;
    st2.setdata(60);
    st2.printdata();

 }